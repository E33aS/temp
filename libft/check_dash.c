/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 16:39:16 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 12:57:52 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		check_dash(t_list elem, char *str, va_list ap)
{
	elem.i++;
	elem.flag_dash = 1;
	if (str[elem.i] == '0')
		elem.i++;
	if (str[elem.i] == '*')
	{
		elem.i++;
		elem.val_dash = va_arg(ap, int);
		if (elem.val_dash < 0)
			elem.val_dash = -elem.val_dash;
	}
	else if (str[elem.i] == '.')
		elem.val_dash = 0;
	else if (ft_strchr("123456789", str[elem.i]) == 1)
	{
		elem.val_dash = ft_atoi_simple(&str[elem.i]);
		elem.i += ft_nblenint(elem.val_dash);
	}
	return (elem);
}
