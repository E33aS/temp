/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 16:05:58 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 12:01:03 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	print_int(int n)
{
	char c;

	c = n + '0';
	write(1, &c, 1);
}

void			ft_putnbr(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	nb = n;
	if (nb <= 9)
		print_int(nb);
	else
	{
		ft_putnbr(nb / 10);
		print_int(nb % 10);
	}
}
