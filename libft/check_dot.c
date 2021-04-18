/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 16:52:01 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 11:55:38 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		check_dot(t_list elem, char *str, va_list ap)
{
	elem.i++;
	elem.flag_dot = 1;
	if (str[elem.i] == '*')
	{
		elem.i++;
		elem.val_dot = va_arg(ap, int);
		if (elem.val_dot < 0)
		{
			elem.val_dot = 0;
			elem.flag_dot = 0;
		}
	}
	else if (ft_strchr("123456789", str[elem.i]) == 1)
	{
		elem.val_dot = ft_atoi_simple(&str[elem.i]);
		elem.i += ft_nblenint(elem.val_dot);
	}
	return (elem);
}
