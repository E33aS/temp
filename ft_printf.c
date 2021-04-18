/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 11:36:19 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 15:42:01 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static t_list	get_flags(t_list elem, va_list ap)
{
	char	*str;

	str = elem.content;
	while (elem.i < ft_strlen(str))
	{
		while (str[elem.i] == ' ' && elem.i < ft_strlen(str))
			elem.i++;
		if (ft_strchr("cspdiuxX%", str[elem.i]) == 1)
			elem = check_spec(elem, str);
		if (ft_strchr("123456789", str[elem.i]) == 1)
			elem = check_space(elem, str);
		if (str[elem.i] == '*')
			elem = check_star(elem, ap);
		if (str[elem.i] == '-')
			elem = check_dash(elem, str, ap);
		if (str[elem.i] == '0')
			elem = check_zero(elem, str, ap);
		if (str[elem.i] == '.')
			elem = check_dot(elem, str, ap);
	}
	return (elem);
}

static char		*check_specifier(char *str)
{
	int		i;
	char	*res;

	i = 0;
	while (ft_strchr("cspdiuxX%", str[i]) == 0 && str[i] != '\0' && i < 20)
		i++;
	res = malloc(sizeof(char) * (i + 1));
	res[0] = '\0';
	i = 0;
	while (ft_strchr("cspdiuxX%", str[i]) == 0 && str[i] != '\0' && i < 20)
	{
		res = ft_charjoin(res, str[i]);
		i++;
	}
	if (str[i] != '\0')
		res = ft_charjoin(res, str[i]);
	return (res);
}

static t_list	get_specifier(const char *format, va_list ap)
{
	int		i;
	t_list	specifier;

	i = 0;
	specifier = ft_init_flags(0);
	while (i < ft_strlen(format))
	{
		if (format[i] == '%')
		{
			i++;
			specifier.content = check_specifier((char*)&format[i]);
			specifier = get_flags(specifier, ap);
			return (specifier);
		}
		i++;
	}
	return (specifier);
}

static int		check_flag(t_list flags, va_list ap)
{
	int		len_print;

	len_print = 0;
	if (flags.spec == 'd' || flags.spec == 'i')
		len_print = print_d(va_arg(ap, int), flags);
	else if (flags.spec == 'c')
		len_print = print_c(va_arg(ap, int), flags);
	else if (flags.spec == 's')
		len_print = print_s(va_arg(ap, char*), flags);
	else if (flags.spec == 'u')
		len_print = print_u(va_arg(ap, unsigned int), flags);
	else if (flags.spec == 'x' || flags.spec == 'X')
		len_print = print_x(va_arg(ap, unsigned int), flags);
	else if (flags.spec == 'p')
		len_print = print_p(va_arg(ap, void*), flags);
	else if (flags.spec == '%')
		len_print = print_perc(flags);
	return (len_print);
}

int				ft_printf(const char *format, ...)
{
	t_list2		list;
	va_list		ap;
	t_list		flags;

	if (ft_strchr(format, '%') == 0)
		return (print_content((char*)format));
	list = ft_init_list(0);
	va_start(ap, format);
	while (list.i < ft_strlen(format))
	{
		while (format[list.i] != '%' && format[list.i] != '\0')
		{
			write(1, &format[list.i++], 1);
			list.len++;
		}
		if (format[list.i] == '%')
		{
			flags = get_specifier(&format[list.i], ap);
			list.i += ft_strlen(flags.content) + 1;
			list.len += check_flag(flags, ap);
			free(flags.content);
		}
	}
	va_end(ap);
	return (list.len);
}
