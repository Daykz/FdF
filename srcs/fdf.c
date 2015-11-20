/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 01:30:25 by dmathe            #+#    #+#             */
/*   Updated: 2015/10/31 21:49:03 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int			key_hook(int keycode, t_coor *coor)
{
	if (keycode == 51)
		change_scale(coor, 1);
	if (keycode == 36)
		change_scale(coor, 2);
	if (keycode == 125)
		change_scale(coor, 3);
	if (keycode == 126)
		change_scale(coor, 4);
	if (keycode == 124)
		change_scale(coor, 5);
	if (keycode == 123)
		change_scale(coor, 6);
	if (keycode == 53)
		exit(0);
	return (0);
}

void		change_scale(t_coor *coor, int i)
{
	mlx_clear_window(coor->mlx, coor->win);
	if (i == 1)
	{
		coor->scalx -= 5;
		coor->scaly -= 5;
	}
	if (i == 2)
	{
		coor->scalx += 5;
		coor->scaly += 5;
	}
	if (i == 3)
		coor->starty += 15;
	if (i == 4)
		coor->starty -= 15;
	if (i == 5)
		coor->startx += 15;
	if (i == 6)
		coor->startx -= 15;
	expose_hook(coor);
}

void		init(t_coor *coor)
{
	coor->scalx = 19;
	coor->scaly = 20;
	coor->startx = 700;
	coor->starty = 100;
}

int			expose_hook(t_coor *coor)
{
	draw_y(coor);
	draw_x(coor);
	return (0);
}
