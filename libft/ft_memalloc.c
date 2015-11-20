/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 19:03:46 by dmathe            #+#    #+#             */
/*   Updated: 2014/11/10 19:28:57 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*area;
	char	*cleaner;
	size_t	counter;

	area = malloc(size);
	if (area != NULL)
	{
		counter = 0;
		cleaner = (char *)area;
		while (counter++ < size)
			*cleaner++ = 0;
	}
	return (area);
}
