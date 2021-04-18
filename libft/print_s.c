/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 15:40:00 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 12:05:07 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		print_s(char *str, t_list flags)
{
	int			len;
	int			space;
	int			zero;

	if (str == 0)
		str = "(null)\0";
	len = ft_strlen(str);
	if (flags.flag_dot == 1 && flags.val_dot >= 0)
		len = (flags.val_dot > len) ? len : flags.val_dot;
	zero = ((flags.val_zero - len) < 0) ? 0 : (flags.val_zero - len);
	space = flags.val_star + flags.val_dash - len;
	space = (space < 0) ? 0 : space;
	if (flags.flag_star == 1 && flags.flag_dash == 0)
		print_space(space);
	print_zero(zero);
	ft_putnstr(str, len);
	if (flags.flag_dash == 1)
		print_space(space);
	return (space + zero + len);
}
