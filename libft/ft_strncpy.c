/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:49:22 by dmathe            #+#    #+#             */
/*   Updated: 2015/02/19 19:01:15 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	if (!src && !dst)
		return (NULL);
	i = ft_strlen(src);
	if (i < n)
	{
		dst = ft_memcpy(dst, src, i);
		while (i < n)
		{
			dst[i] = 0;
			i++;
		}
	}
	else
		dst = ft_memcpy(dst, src, n);
	return (dst);
}
