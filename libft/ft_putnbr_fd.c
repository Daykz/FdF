/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:48:42 by dmathe            #+#    #+#             */
/*   Updated: 2015/02/19 19:08:19 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_abs(int n)
{
	int			ret;

	ret = (n < 0) ? -n : n;
	return (ret);
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		write(fd, "-", 1);
	if (n >= 10 || n <= -10)
	{
		ft_putnbr_fd(ft_abs(n / 10), fd);
		ft_putnbr_fd(ft_abs(n % 10), fd);
	}
	else
		ft_putchar(ft_abs(n) + '0');
}
