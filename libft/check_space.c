/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 16:29:44 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 11:55:55 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		check_space(t_list elem, char *str)
{
	elem.flag_star = 1;
	elem.val_star = ft_atoi_simple(&str[elem.i]);
	elem.i += ft_nblenint(elem.val_star);
	return (elem);
}
