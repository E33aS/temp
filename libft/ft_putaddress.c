/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 17:26:56 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 12:00:37 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	print_hexa(int n)
{
	char c;
	char *base;

	base = "0123456789abcdef";
	c = base[n];
	write(1, &c, 1);
}

static	void	ft_hexa(uintptr_t ptr)
{
	if (ptr < 16)
		print_hexa(ptr);
	else
	{
		ft_hexa(ptr / 16);
		print_hexa(ptr % 16);
	}
}

void			ft_putaddress(uintptr_t ptr)
{
	ft_hexa(ptr);
}
