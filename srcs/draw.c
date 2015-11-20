/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 01:30:40 by dmathe            #+#    #+#             */
/*   Updated: 2015/10/31 21:47:38 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int		get_color(int z1, int z2)
{
	int	color;

	if (z1 >= 0 && z2 >= 0 && z2 != z1)
		color = 0x00FF00;
	else if (z1 == z2 && z1 > 0)
		color = 0xFF0000;
	else if (z1 <= 0 && z2 <= 0 && z2 != z1)
		color = 0xFFFF00;
	else if (z1 == z2 && z1 < 0)
		color = 0x660099;
	else
		color = 0x0000FF;
	return (color);
}

int		coord_x(t_coor *coor, int x, int y)
{
	return (coor->startx - (coor->scalx * y) + (coor->scalx * x));
}

int		coord_y(t_coor *coor, int x, int y, int z)
{
	if (z > 30000)
		z = 30000;
	if (z < -30000)
		z = -30000;
	return (coor->starty + ((coor->scaly) * x) + ((coor->scaly) * y) - (z * 2));
}

void	draw_x(t_coor *coor)
{
	int			i;
	int			j;

	i = 0;
	while (i < (coor->nbr_line - 1))
	{
		j = 0;
		while (j < coor->len[i] && (coor->len[i + 1] - j) > 0)
		{
			coor->x1 = coord_x(coor, j, i);
			coor->y1 = coord_y(coor, j, i, coor->map[i][j]);
			coor->x2 = coord_x(coor, j, i + 1);
			coor->y2 = coord_y(coor, j, i + 1, coor->map[i + 1][j]);
			bh_dispatch(coor, get_color(coor->map[i][j], coor->map[i + 1][j]));
			j++;
		}
		i++;
	}
}

void	draw_y(t_coor *coor)
{
	int			i;
	int			j;

	i = 0;
	while (i < coor->nbr_line)
	{
		j = 0;
		while (j < (coor->len[i] - 1))
		{
			coor->x1 = coord_x(coor, j, i);
			coor->y1 = coord_y(coor, j, i, coor->map[i][j]);
			j++;
			coor->x2 = coord_x(coor, j, i);
			coor->y2 = coord_y(coor, j, i, coor->map[i][j]);
			bh_dispatch(coor, get_color(coor->map[i][j - 1], coor->map[i][j]));
		}
		i++;
	}
}
