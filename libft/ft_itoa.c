/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 19:20:28 by dmathe            #+#    #+#             */
/*   Updated: 2015/02/19 19:10:43 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_nb_digit(int n)
{
	unsigned int		result;

	result = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		result++;
	}
	return (result);
}

static void				ft_num_to_char(char *str, int n, size_t len, size_t neg)
{
	while (len != 0)
	{
		str[len - 1 + neg] = (n % 10) + '0';
		n /= 10;
		len--;
	}
}

char					*ft_itoa(int n)
{
	char				*str;
	size_t				neg;
	size_t				len;

	len = ft_nb_digit(n);
	neg = (n < 0) ? 1 : 0;
	str = ft_strnew(len + neg + 1);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (neg == 1)
	{
		n = -n;
		str[0] = '-';
	}
	str[len + neg] = '\0';
	ft_num_to_char(str, n, len, neg);
	return (str);
}
