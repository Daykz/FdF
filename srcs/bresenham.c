/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shazan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:09:27 by shazan            #+#    #+#             */
/*   Updated: 2015/10/31 21:47:01 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	bh_dispatch(t_coor *coor, int color)
{
	coor->dx = coor->x2 - coor->x1;
	coor->dy = coor->y2 - coor->y1;
	coor->dx = ABS(coor->dx);
	coor->dy = ABS(coor->dy);
	coor->incx = (coor->x2 > coor->x1) ? 1 : -1;
	coor->incy = (coor->y2 > coor->y1) ? 1 : -1;
	if (coor->dx > coor->dy)
		m_neg(coor, color);
	else
		m_pos(coor, color);
}

void	m_neg(t_coor *coor, int color)
{
	int	inc1;
	int	inc2;
	int	e;
	int	i;

	i = 0;
	mlx_pixel_put(coor->mlx, coor->win, coor->x1, coor->y1, color);
	e = (2 * coor->dy) - coor->dx;
	inc1 = 2 * (coor->dy - coor->dx);
	inc2 = 2 * coor->dy;
	while (i < coor->dx)
	{
		if (e >= 0)
		{
			coor->y1 = coor->y1 + coor->incy;
			e = e + inc1;
		}
		else
			e = e + inc2;
		coor->x1 = coor->x1 + coor->incx;
		mlx_pixel_put(coor->mlx, coor->win, coor->x1, coor->y1, color);
		i++;
	}
}

void	m_pos(t_coor *coor, int color)
{
	int	inc1;
	int	inc2;
	int	e;
	int	i;

	i = 0;
	mlx_pixel_put(coor->mlx, coor->win, coor->x1, coor->y1, color);
	e = (2 * coor->dx) - coor->dy;
	inc1 = 2 * (coor->dx - coor->dy);
	inc2 = 2 * coor->dx;
	while (i < coor->dy)
	{
		if (e >= 0)
		{
			coor->x1 = coor->x1 + coor->incx;
			e = e + inc1;
		}
		else
			e = e + inc2;
		coor->y1 = coor->y1 + coor->incy;
		mlx_pixel_put(coor->mlx, coor->win, coor->x1, coor->y1, color);
		i++;
	}
}
