/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 13:53:30 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 12:00:49 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	print_hexa(unsigned int n, char flag)
{
	char c;
	char *base;

	base = "0123456789abcdef";
	if (flag == 'X')
		base = "0123456789ABCDEF";
	c = base[n];
	write(1, &c, 1);
}

void			ft_puthexa(unsigned int nb, char flag)
{
	if (nb < 16)
		print_hexa(nb, flag);
	else
	{
		ft_puthexa(nb / 16, flag);
		print_hexa(nb % 16, flag);
	}
}
