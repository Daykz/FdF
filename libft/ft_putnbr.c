/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:53:33 by dmathe            #+#    #+#             */
/*   Updated: 2015/02/19 19:09:08 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_abs(int n)
{
	int			ret;

	ret = (n < 0) ? -n : n;
	return (ret);
}

void			ft_putnbr(int n)
{
	if (n < 0)
		write(1, "-", 1);
	if (n >= 10 || n <= -10)
	{
		ft_putnbr(ft_abs(n / 10));
		ft_putnbr(ft_abs(n % 10));
	}
	else
		ft_putchar(ft_abs(n) + '0');
}
