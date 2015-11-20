/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 19:20:23 by dmathe            #+#    #+#             */
/*   Updated: 2014/11/10 19:54:41 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	const char		*t1;
	const char		*t2;

	i = 0;
	t1 = s1;
	t2 = s2;
	if (n > 0)
	{
		while (i < n)
		{
			if (t1[i] != t2[i])
				return ((unsigned char)t1[i] - (unsigned char)t2[i]);
			else if (t1[i] == '\0' && t2[i] == '\0')
				return (0);
			i++;
		}
	}
	return (0);
}
