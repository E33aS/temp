/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_perc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 12:20:53 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 12:04:53 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		print_perc(t_list flags)
{
	int	zero;
	int	space;

	zero = flags.val_zero - 1;
	zero = (zero < 1) ? 0 : zero;
	space = flags.val_star + flags.val_dash - 1;
	space = (space < 1) ? 0 : space;
	if (flags.flag_star == 1 && flags.flag_dash == 0)
		print_space(space);
	print_zero(zero);
	write(1, "%", 1);
	if (flags.flag_dash == 1)
		print_space(space);
	return (space + zero + 1);
}
