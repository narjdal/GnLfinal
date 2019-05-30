/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:40:51 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/08 19:25:51 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	size_t i;

	i = 0;
	if (str1[0] == '\0' && str2[0] == '\0')
		return (0);
	while (str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	return (((unsigned char)str1[i]) - ((unsigned char)str2[i]));
}
