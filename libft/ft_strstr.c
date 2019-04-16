/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:44:12 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/08 19:22:53 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *tofind)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (tofind[0] == '\0')
		return ((char*)(str));
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == tofind[j])
		{
			j++;
			if (tofind[j] == '\0')
				return ((char*)(str + i));
		}
		i++;
	}
	return (0);
}
