/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:41:19 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/08 19:25:35 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*stock;

	i = 0;
	if (!(stock = ((char *)malloc(sizeof(char) * ft_strlen(s) + 1))))
		return (0);
	while (i < ft_strlen(s))
	{
		stock[i] = s[i];
		i++;
	}
	stock[i] = '\0';
	return (stock);
}
