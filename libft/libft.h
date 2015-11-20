/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:40:20 by dmathe            #+#    #+#             */
/*   Updated: 2015/07/29 02:57:38 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUF_SIZE 4096
# define A			0
# define INDICE		1
# define RET		2
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct		s_list
{
	void			*data;
	struct s_list 	*next;
	struct s_list	*prev;
}					t_list;

char				*ft_itoa(int n);
char				*ft_strtrim(char const *s);
size_t				count_tok(char const *s, char c);
char				**ft_strsplit(char const *s, char c);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memcpy(void *dst, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memalloc(size_t size);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
size_t				ft_strlcat(char *dst, const char *src, size_t size);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_striter(char *s, void (*f)(char *));
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strcat(char *s1, const char *s2);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *s);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_atoi(const char *str);
char				*ft_strchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_strclr(char *s);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_strdel(char **as);
size_t				list_size(t_list *list);
t_list 				*link_init(void *data);
t_list 				*list_end(t_list *list);
t_list				*list_second(t_list *list);
void 				list_swap_data(t_list *l1, t_list *l2);
void				list_remove(t_list **list, t_list *link);
void				list_add_next(t_list **list, t_list *link);
int					get_next_line(int const fd, char **line);
void				print_list(t_list *list);
int					ft_getnbr(char *str);

#endif
