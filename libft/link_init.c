/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 18:15:54 by dmathe            #+#    #+#             */
/*   Updated: 2015/06/16 18:21:20 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*link_init(void *data)
{
	t_list *new_link;

	new_link = malloc(sizeof(*new_link));
	new_link->data = data;
	new_link->next = NULL;
	return (new_link);
}
