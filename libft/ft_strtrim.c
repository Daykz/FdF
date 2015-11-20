/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 20:04:04 by dmathe            #+#    #+#             */
/*   Updated: 2015/02/19 18:07:37 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	while (s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	j--;
	while (str[j] == ' ' || (str[j] >= 9 && str[j] <= 13))
	{
		str[j] = '\0';
		j--;
	}
	return (str);
}
