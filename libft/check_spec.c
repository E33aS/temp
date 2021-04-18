/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_spec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 16:24:24 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 11:56:15 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	check_spec(t_list elem, char *str)
{
	elem.spec = ft_getstrchr("cspdiuxX%", str[elem.i]);
	elem.i++;
	return (elem);
}
