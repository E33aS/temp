/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 11:13:30 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 11:57:59 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_init_flags(int i)
{
	t_list	flags;

	flags.content = 0;
	flags.flag_star = i;
	flags.val_star = i;
	flags.flag_zero = i;
	flags.val_zero = i;
	flags.flag_dash = i;
	flags.val_dash = i;
	flags.flag_dot = i;
	flags.val_dot = i;
	flags.spec = i;
	flags.i = i;
	return (flags);
}
