/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:32:05 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/08 19:29:13 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_number(int n)
{
	int	i;

	i = 1;
	while (n % 10 != n)
	{
		i++;
		n = n / 10;
	}
	if (n < 0)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char	*res;
	int		num;
	int		i;

	i = ft_number(n);
	num = n;
	if (!(res = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	res[i] = '\0';
	i--;
	while (i != -1)
	{
		if (num < 0)
			res[i] = (-(num % 10) + 48);
		else
			res[i] = (num % 10 + 48);
		i--;
		num = num / 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
