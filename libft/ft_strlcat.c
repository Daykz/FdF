/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:11:03 by dmathe            #+#    #+#             */
/*   Updated: 2014/11/16 17:26:26 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;

	i = 0;
	while (i < size)
	{
		if (dst[i] == '\0')
			break ;
		i++;
	}
	len = i + ft_strlen(src);
	k = size - i - 1;
	if (i != size)
	{
		j = 0;
		while (src[j] && j < k)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (len);
}
