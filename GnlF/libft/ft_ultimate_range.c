/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 01:06:35 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/10 16:14:17 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	if (max - min <= 0 || (tab = malloc(sizeof(int) * (max - min))) == NULL)
		return (0);
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (max - min);
}
