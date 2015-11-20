/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 19:18:03 by dmathe            #+#    #+#             */
/*   Updated: 2015/03/17 19:18:34 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				stock_line(char *buf, char *line, int *i, int *var)
{
	static int		j = 0;

	while (buf[*i])
	{
		if (buf[*i] == '\n')
		{
			var[INDICE] = 1;
			(*i)++;
			line[j] = '\0';
			j = 0;
			return ;
		}
		else
		{
			line[j] = buf[*i];
			(*i)++;
			j++;
		}
	}
	line[j] = '\0';
	*i = 0;
	var[A] = 2;
}

int					get_next_line(int const fd, char **line)
{
	static char		buf[BUF_SIZE + 1];
	static int		i = 0;
	int				var[3];

	var[INDICE] = 0;
	*line = (char *)malloc(sizeof(char) * (BUF_SIZE + 4096));
	if (line == NULL)
		return (-1);
	while (var[INDICE] == 0)
	{
		if (i == 0)
		{
			var[RET] = read(fd, buf, BUF_SIZE);
			if (var[RET] < 0)
				return (-1);
			if (var[RET] == 0)
				return ((var[A] == 2 && var[RET] != 0) ? 1 : 0);
			buf[var[RET]] = '\0';
		}
		stock_line(buf, *line, &i, var);
	}
	return (1);
}
