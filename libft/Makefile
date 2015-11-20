# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/12 13:11:10 by dmathe            #+#    #+#              #
#    Updated: 2015/07/29 02:59:10 by dmathe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strsplit.c ft_memccpy.c ft_putnbr.c ft_strequ.c ft_strnequ.c \
	ft_memchr.c	ft_putnbr_fd.c ft_striter.c	ft_strnew.c ft_itoa.c \
	ft_memcmp.c	ft_putstr.c	ft_striteri.c ft_strnstr.c \
	ft_atoi.c ft_memcpy.c ft_putstr_fd.c ft_strjoin.c ft_strrchr.c \
	ft_bzero.c ft_memdel.c ft_strcat.c ft_strlcat.c ft_strstr.c \
	ft_isalnum.c ft_memmove.c ft_strchr.c ft_strlen.c ft_strsub.c \
	ft_isalpha.c ft_memset.c ft_strclr.c ft_strmap.c ft_tolower.c \
	ft_isascii.c ft_putchar.c ft_strcmp.c ft_strmapi.c ft_toupper.c \
	ft_isdigit.c ft_putchar_fd.c ft_strcpy.c ft_strncat.c ft_strtrim.c \
	ft_isprint.c ft_putendl.c ft_strdel.c ft_strncmp.c \
	link_init.c list_add.c list_end.c list_remove.c \
	list_second.c list_size.c list_swap_data.c \
	get_next_line.c ft_getnbr.c ft_strsplit.c list_print.c \
	ft_memalloc.c ft_putendl_fd.c ft_strdup.c ft_strncpy.c
PO = ft_strsplit.o ft_memccpy.o ft_putnbr.o ft_strequ.o ft_strnequ.o \
	ft_memchr.o ft_putnbr_fd.o ft_striter.o ft_strnew.o ft_itoa.o \
	ft_memcmp.o ft_putstr.o ft_striteri.o ft_strnstr.o \
	ft_atoi.o ft_memcpy.o ft_putstr_fd.o ft_strjoin.o ft_strrchr.o \
	ft_bzero.o ft_memdel.o ft_strcat.o ft_strlcat.o ft_strstr.o \
	ft_isalnum.o ft_memmove.o ft_strchr.o ft_strlen.o ft_strsub.o \
	ft_isalpha.o ft_memset.o ft_strclr.o ft_strmap.o ft_tolower.o \
	ft_isascii.o ft_putchar.o ft_strcmp.o ft_strmapi.o ft_toupper.o \
	ft_isdigit.o ft_putchar_fd.o ft_strcpy.o ft_strncat.o ft_strtrim.o \
	ft_isprint.o ft_putendl.o ft_strdel.o ft_strncmp.o \
	link_init.o list_add.o list_end.o list_remove.o \
	list_second.o list_size.o list_swap_data.o \
	get_next_line.o ft_getnbr.o ft_strsplit.o list_print.o \
	ft_memalloc.o ft_putendl_fd.o ft_strdup.o ft_strncpy.o
HEAD = -I./
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(HEAD) $(SRC)
	ar rc $(NAME) $(PO)
	ranlib $(NAME)

clean:
	rm -rf $(PO)

fclean: clean
	rm -rf $(PO) $(NAME)

re: fclean all
