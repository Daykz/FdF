/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_end.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 18:49:15 by dmathe            #+#    #+#             */
/*   Updated: 2015/06/16 18:53:52 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*list_befend(t_list *list)
{
	t_list *link;

	link = NULL;
	if (list)
	{
		while (list->next->next)
			list = list->next;
		link = list;
	}
	return (link);
}

t_list *list_end(t_list *list)
{
	t_list *link;

	link = NULL;
	if (list)
	{
		while (list->next)
			list = list->next;
		link = list;
	}
	return (link);
}
