/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:09:47 by dmathe            #+#    #+#             */
/*   Updated: 2015/02/19 18:58:08 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *s1, const char *s2)
{
	size_t		len_s2;

	len_s2 = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	while (*s1 && len_s2)
	{
		if (!ft_memcmp(s1++, s2, len_s2))
			return ((char *)s1 - 1);
	}
	return (NULL);
}
