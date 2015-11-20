/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 20:52:59 by dmathe            #+#    #+#             */
/*   Updated: 2015/06/22 20:53:02 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	list_add_next(t_list **list, t_list *link)
{
	t_list *tmp;
	
	tmp = *list;
	if (link)
	{
		if (!tmp)
			*list = link;
		else
		{
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = link;
		}
	}
}
