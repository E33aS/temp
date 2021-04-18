/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 17:55:28 by esommier          #+#    #+#             */
/*   Updated: 2020/01/06 12:02:10 by esommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strstr(char *str, char *list_chr)
{
	int i;

	i = 0;
	while (list_chr[i] != '\0')
	{
		if (ft_strchr(str, list_chr[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
