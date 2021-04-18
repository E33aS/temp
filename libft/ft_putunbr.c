/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 16:05:58 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 12:01:34 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	print_int(unsigned int n)
{
	char c;

	c = n + '0';
	write(1, &c, 1);
}

void			ft_putunbr(unsigned int n)
{
	if (n <= 9)
		print_int(n);
	else
	{
		ft_putunbr(n / 10);
		print_int(n % 10);
	}
}
