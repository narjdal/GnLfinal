/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:42:41 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/08 19:24:41 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*newstr;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	if (!(newstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	while (s[i])
	{
		newstr[i] = f(s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
