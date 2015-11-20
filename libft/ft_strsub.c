/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:12:19 by dmathe            #+#    #+#             */
/*   Updated: 2014/11/10 19:34:11 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*s1;
	unsigned int	i;
	int				j;

	j = 0;
	i = 0;
	if (!s)
		return (0);
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (s1 != NULL)
	{
		while (s[i] != '\0' && i < start)
			i++;
		while (s[i] != '\0' && i < (start + len))
		{
			s1[j] = s[i];
			i++;
			j++;
		}
		s1[j] = '\0';
		return (s1);
	}
	return (0);
}
