/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getlenhexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 10:44:34 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 12:03:20 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			getlenhexa(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb > 16)
	{
		nb = nb / 16;
		len++;
	}
	len++;
	return (len);
}
