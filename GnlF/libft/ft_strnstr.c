/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:43:48 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/08 19:23:01 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (tofind[0] == '\0')
		return ((char*)(str));
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == tofind[j] && (i + j) < len)
		{
			j++;
			if (tofind[j] == '\0')
				return ((char*)(str + i));
		}
		i++;
	}
	return (0);
}
