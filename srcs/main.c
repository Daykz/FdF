/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 20:49:36 by dmathe            #+#    #+#             */
/*   Updated: 2015/10/31 22:12:20 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

char		*all_to_space(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' && ft_isdigit(str[i + 1]))
			i++;
		if (str[i] && ft_isdigit(str[i]) == 0)
			str[i] = ' ';
		i++;
	}
	return (str);
}

void		count_line(t_coor *coor)
{
	char	*line;

	coor->nbr_line = 0;
	while (get_next_line(coor->fd, &line) == 1)
		(coor->nbr_line)++;
	close(coor->fd);
}

int			count_nbr(char *str)
{
	int i;
	int x;

	x = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == ' ')
			x++;
		if (str[i] >= 48 && str[i] < 58 && str[i + 1] >= 48 && str[i + 1] < 58)
			x++;
		i++;
	}
	return (i - x);
}

void		stock_fd(t_coor *coor)
{
	int		j;
	int		i;

	i = 0;
	coor->map = (int **)malloc(sizeof(int *) * coor->nbr_line);
	coor->len = (int *)malloc(sizeof(int) * coor->nbr_line);
	while (get_next_line(coor->fd, &(coor->line)) == 1)
	{
		j = 0;
		coor->line = all_to_space(coor->line);
		coor->split = ft_strsplit(coor->line, ' ');
		coor->len[i] = count_nbr(coor->line);
		coor->map[i] = (int *)malloc(sizeof(int) * coor->len[i]);
		while (j < coor->len[i])
		{
			coor->map[i][j] = ft_getnbr(coor->split[j]);
			j++;
		}
		i++;
		free(coor->split);
	}
}

int			main(int ac, char **av)
{
	t_coor	coor;

	if (ac == 1)
		ft_putstr("No file\n");
	else if (ac == 2)
	{
		if ((coor.fd = open(av[1], O_RDONLY)) == -1)
		{
			ft_putstr("Can't read the map.");
			return (0);
		}
		count_line(&coor);
		coor.fd = open(av[1], O_RDONLY);
		init(&coor);
		stock_fd(&coor);
		close(coor.fd);
		coor.mlx = mlx_init();
		coor.win = mlx_new_window(coor.mlx, 1200, 1200, "FdF");
		mlx_expose_hook(coor.win, expose_hook, &coor);
		mlx_key_hook(coor.win, key_hook, &coor);
		mlx_loop(coor.mlx);
	}
	return (0);
}
