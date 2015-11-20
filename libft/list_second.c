/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_second.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/26 21:43:21 by dmathe            #+#    #+#             */
/*   Updated: 2015/06/26 21:43:24 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*list_second(t_list *list)
{
	t_list	*link;

	link = NULL;
	if (list)
	{
		list = list->next;
		link = list;
	}
	return (link);
}
