/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 21:28:21 by dmathe            #+#    #+#             */
/*   Updated: 2015/06/22 21:28:22 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	list_remove(t_list **list, t_list *link)
{
	t_list *tmp;
	t_list *rem;

	tmp = (*list);
	rem = NULL;
	if (tmp && link)
	{
		if (*list == link)
		{
			(*list) = (*list)->next;
			free(link);
			link = NULL;
			return ;
		}
		while (tmp)
		{
			if (tmp->next == link)
				break ;
			tmp = tmp->next;
		}
		if (tmp == list_end(*list))
		{
			tmp->next = NULL;
			free(link);
			link = NULL;
		}
		else
		{
			tmp->next = tmp->next->next;
			free(link);
			link = NULL;
		}
	}
}