/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:21:53 by dmathe            #+#    #+#             */
/*   Updated: 2014/11/10 19:31:59 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!s || !f)
		return (NULL);
	while (s[j] != '\0')
		j++;
	str = (char *)malloc(sizeof(char) * j);
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
