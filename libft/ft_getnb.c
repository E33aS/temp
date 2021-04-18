/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 11:37:37 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 11:57:30 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getnb(char *str)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = ft_nblenchar(str);
	if (!(res = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	return (res);
}
