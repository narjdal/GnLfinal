/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narjdal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:33:30 by narjdal           #+#    #+#             */
/*   Updated: 2019/04/08 19:28:36 by narjdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (*alst == NULL)
		return ;
	tmp = *alst;
	while ((*alst) != NULL)
	{
		*alst = (*alst)->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = *alst;
	}
	free((*alst));
	*alst = 0;
}
