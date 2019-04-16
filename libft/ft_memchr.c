/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:37:42 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/08 19:30:22 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*src;
	unsigned char			letter;
	size_t					i;

	i = 0;
	src = (const unsigned char *)s;
	letter = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == letter)
			return ((void *)src + i);
		i++;
	}
	return (NULL);
}
