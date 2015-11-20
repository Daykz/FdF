/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 03:08:55 by dmathe            #+#    #+#             */
/*   Updated: 2015/10/31 21:51:37 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include <unistd.h>
# include <mlx.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>

# define ABS(x) ((x) < 0 ? (-x) : (x));

typedef struct		s_coor
{
	void			*win;
	void			*mlx;
	int				fd;
	char			*line;
	int				nbr_line;
	char			**split;
	int				*len;
	int				**map;
	int				x1;
	int				y1;
	int				x2;
	int				y2;
	int				startx;
	int				starty;
	int				scalx;
	int				scaly;
	int				dx;
	int				dy;
	int				incx;
	int				incy;
}					t_coor;

void				change_scale(t_coor *coor, int i);
int					key_hook(int keycode, t_coor *coor);
char				*all_to_space(char *str);
int					expose_hook(t_coor *coor);
void				bh_dispatch(t_coor *coor, int color);
void				m_neg(t_coor *coor, int color);
void				m_pos(t_coor *coor, int color);
int					coord_y(t_coor *coor, int x, int y, int z);
int					coord_x(t_coor *coor, int x, int y);
void				draw_y(t_coor *coor);
void				draw_x(t_coor *coor);
void				init(t_coor *coor);

#endif
