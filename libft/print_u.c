/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 12:06:21 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 12:05:31 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		print_u(unsigned int nb, t_list flags)
{
	int			len;
	int			zero;
	int			space;

	len = ft_nblenuint((unsigned int)nb);
	if (flags.flag_dot == 0)
		zero = ((flags.val_zero - len) < 0) ? 0 : (flags.val_zero - len);
	else
		zero = ((flags.val_dot - len) < 0) ? 0 : (flags.val_dot - len);
	if (flags.flag_dot == 1 && flags.val_dot == 0 && nb == 0)
		len = 0;
	space = flags.val_star + flags.val_zero + flags.val_dash - zero - len;
	space = (space < 0) ? 0 : space;
	if (flags.flag_dash == 0 && (flags.flag_star == 1 || flags.flag_zero == 1))
		print_space(space);
	print_zero(zero);
	if (nb != 0)
		ft_putunbr(nb);
	if (nb == 0 && (!(flags.flag_dot == 1 && flags.val_dot == 0)))
		ft_putunbr(nb);
	if (flags.flag_dash == 1)
		print_space(space);
	return (space + zero + len);
}
