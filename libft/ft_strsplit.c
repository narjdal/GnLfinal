/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:44:04 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/10 14:11:07 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_malloceach(char *str, char **tab, char c)
{
	int i;
	int j;
	int a;

	a = 0;
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != c && str[i])
		{
			a++;
			i++;
		}
		if (a != 0)
		{
			if (!(tab[j] = (char *)malloc(sizeof(char) * a + 1)))
				tab[j] = NULL;
			j++;
		}
		i++;
		a = 0;
	}
}

static int			ft_countwords(char *str, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if ((str[i] != c) && ((str[i + 1] == c) || str[i + 1] == 0))
		{
			word++;
		}
		i++;
	}
	return (word);
}

static void			fillthetab(char *str, char **tab, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	while (str[k] != '\0')
	{
		while ((str[k] != c) && str[k])
		{
			tab[i][j] = str[k];
			k++;
			j++;
		}
		if (j != 0)
		{
			tab[i][j] = '\0';
			j = 0;
			i++;
		}
		if (str[k] != '\0')
			k++;
	}
	tab[i] = NULL;
}

char				**ft_strsplit(char const *str, char c)
{
	char **tab;

	if (str == NULL)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *)
		* (ft_countwords((char *)str, c) + 1))))
		return (NULL);
	ft_malloceach((char *)str, tab, c);
	fillthetab((char *)str, tab, c);
	return (tab);
}
