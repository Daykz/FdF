# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/12 13:11:10 by dmathe            #+#    #+#              #
#    Updated: 2015/10/31 22:43:37 by dmathe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRCS = srcs/main.c srcs/draw.c srcs/fdf.c srcs/bresenham.c

OBJS =		$(SRCS:.c=.o)

INC_FILES =	-I fdf.h

INCLUDES =	-I libft/ \
			-I mini \
			-I includes/

LIBS =		-L libft/ -lft \
			-L mini/ -lmlx -framework OpenGL -framework AppKit

FLAGS =		-g -Wall -Wextra -Werror


$(NAME):	$(OBJS)
	@make -C libft/ fclean
	@make -C libft/
	@make -C mini/ clean
	@make -C mini/
	@echo "Create binary"
	@gcc -o $(NAME) $(OBJS) $(LIBS)
	@echo "Complitation ok"

$(OBJS): %.o: %.c
	@gcc $(FLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

clean:
	rm -f	$(OBJS)

fclean: clean
	rm -f	$(NAME)

re: fclean all

.PHONY:	 all clean fclean re
