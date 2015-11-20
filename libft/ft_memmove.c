/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 19:24:18 by dmathe            #+#    #+#             */
/*   Updated: 2014/11/16 17:16:46 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *temp;

	temp = (char *)malloc(sizeof(char *) * n);
	temp = ft_memcpy(temp, src, n);
	dst = (void *)ft_memcpy(dst, temp, n);
	free(temp);
	return (dst);
}
