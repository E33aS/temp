/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 12:01:29 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 12:04:35 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	partial_printp(uintptr_t ptr, int space, int zero, t_list flags)
{
	print_zero(zero);
	if (ptr != 0)
		ft_putaddress(ptr);
	if (ptr == 0 && (!(flags.flag_dot == 1 && flags.val_dot == 0)))
		ft_putaddress(ptr);
	if (flags.flag_dash == 1)
		print_space(space);
}

int				print_p(void *address, t_list flags)
{
	int			len;
	int			zero;
	int			space;
	uintptr_t	ptr;

	ptr = (uintptr_t)address;
	len = getlenptr(ptr);
	if (flags.flag_dot == 0)
		zero = ((flags.val_zero - len - 2) < 0) ? 0 :
				(flags.val_zero - len - 2);
	else
		zero = ((flags.val_dot - len) < 0) ? 0 : (flags.val_dot - len);
	if (ptr == 0 && flags.flag_dot == 1 && flags.val_dot == 0)
		len = 0;
	space = flags.val_star + flags.val_zero + flags.val_dash - zero - len - 2;
	space = (space < 0) ? 0 : space;
	if (flags.flag_dash == 0 && (flags.flag_star == 1 || flags.flag_zero == 1))
		print_space(space);
	write(1, "0x", 2);
	partial_printp(ptr, space, zero, flags);
	return (space + zero + len + 2);
}
