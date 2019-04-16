/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:44:31 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/08 19:22:10 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	n;
	size_t	k;
	char	*str;
	char	*newstr;

	if (s == NULL)
		return (NULL);
	i = 0;
	k = 0;
	str = (char *)s;
	n = ft_strlen(str);
	while (str[i] == 32 || str[i] == 10 || str[i] == 9)
		i++;
	while ((str[n] == 32 || str[n] == 10 || str[n] == 9 || str[n] == 0) && n)
		n--;
	if (n == 0)
		i = 0;
	if (!(newstr = (char *)malloc((sizeof(char) * (n - i + 2)))))
		return (0);
	while ((i <= n) && n != 0)
		newstr[k++] = str[i++];
	newstr[k] = '\0';
	return (newstr);
}
