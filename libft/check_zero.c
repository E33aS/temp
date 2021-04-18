/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_zero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 16:49:08 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 13:00:06 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		check_zero(t_list elem, char *str, va_list ap)
{
	elem.i++;
	elem.flag_zero = 1;
	if (str[elem.i] == '*')
	{
		elem.i++;
		elem.val_zero = va_arg(ap, int);
		if (elem.val_zero < 0)
		{
			elem.flag_zero = 0;
			elem.flag_dash = 1;
			elem.val_dash = -elem.val_zero;
			elem.val_zero = 0;
		}
	}
	else if (str[elem.i] == '.')
		elem.val_zero = 0;
	else if (ft_strchr("123456789", str[elem.i]) == 1)
	{
		elem.val_zero = ft_atoi_simple(&str[elem.i]);
		elem.i += ft_nblenint(elem.val_zero);
	}
	return (elem);
}
