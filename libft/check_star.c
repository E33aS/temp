/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_star.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 16:33:35 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 11:56:28 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		check_star(t_list elem, va_list ap)
{
	elem.i++;
	elem.val_star = va_arg(ap, int);
	if (elem.val_star < 0)
	{
		elem.flag_dash = 1;
		elem.val_dash = -elem.val_star;
		elem.flag_zero = 0;
		elem.val_zero = 0;
		elem.val_star = 0;
	}
	else if (elem.flag_zero == 1)
	{
		elem.val_zero = elem.val_star;
		elem.val_star = 0;
	}
	else
		elem.flag_star = 1;
	return (elem);
}
