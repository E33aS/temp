/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_simple.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 10:46:50 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 11:56:56 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_simple(char *str)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	while (ft_isdigit(str[i]) == 1)
		nb = nb * 10 + str[i++] - '0';
	return (nb);
}
