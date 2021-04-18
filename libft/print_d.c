/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 12:22:31 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 13:12:12 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	partial_printd(int nb, int space, int zero, t_list flags)
{
	print_zero(zero);
	if (nb != 0)
		ft_putnbr(nb);
	if (nb == 0 && (!(flags.flag_dot == 1 && flags.val_dot == 0)))
		ft_putnbr(nb);
	if (flags.flag_dash == 1)
		print_space(space);
}

int				print_d(int nb, t_list flags)
{
	int			neg;
	int			len;
	int			zero;
	int			space;

	neg = 0;
	len = ft_nblenint(nb);
	neg = (nb < 0) ? 1 : neg;
	nb = (nb < 0) ? -nb : nb;
	if (flags.flag_dot == 0)
		zero = ((flags.val_zero - len) < 0) ? 0 : (flags.val_zero - len);
	else
		zero = ((flags.val_dot - len + neg) < 0) ? 0 :
				(flags.val_dot - len + neg);
	if (flags.flag_dot == 1 && flags.val_dot == 0 && nb == 0)
		len = 0;
	space = flags.val_star + flags.val_zero + flags.val_dash - zero - len;
	space = (space < 0) ? 0 : space;
	if (flags.flag_dash == 0 && (flags.flag_star == 1 || flags.flag_zero == 1))
		print_space(space);
	if (nb > -2147483648)
		ft_isneg(neg);
	partial_printd(nb, space, zero, flags);
	return (space + zero + len);
}
