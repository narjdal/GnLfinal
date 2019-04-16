/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:42:20 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/08 19:24:23 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t both;

	i = 0;
	j = 0;
	both = ft_strlen(dst) + ft_strlen(src);
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	else if (size >= ft_strlen(dst))
	{
		while (dst[i] != '\0')
			i++;
		while (src[j] != '\0' && (i + j) < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
		return (both);
	}
	return (0);
}
