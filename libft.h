/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <jroulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 08:54:15 by jroulet           #+#    #+#             */
/*   Updated: 2024/07/14 16:55:13 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <stdio.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdbool.h>

int			ft_isascii(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_atoi(const char *nptr);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *a, const char *b);
void		ft_strcpy(char *dst, const char *src);
void		ft_free_char_tab(char **matrix);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strdup(const char *s1);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_strjoin(const char *s1, char const *s2);
char		*ft_strtrim(const char *s1, const char *set);
char		**ft_split(const char *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));

void		*ft_memset(void *s, int c, size_t len);
void		ft_bzero(void *s, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t ni);
void		*ft_calloc(size_t count, size_t size);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
bool		ft_c_in_s(const char *str, int ch);

size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

t_list		*ft_lstnew(int content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list	*lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *));
char		*trim_free(char *s1, char const *set);
char		*ft_strncpy(char *dest, const char *src, size_t n);

void		ft_lstprint(t_list *head);

char		*ft_strcat(char *dest, char *src);

int			ft_printf(const char *str, ...);
int			ft_forcheck(va_list args, const char format);
int			ft_print_char(int c);
int			ft_print_str(char *str);
int			ft_print_nbr(int n);
int			ft_print_percent(void);

int			ft_print_ptr(unsigned long ptr);
int			ft_ptr_len(uintptr_t ptr);
void		ft_ptr_calc(uintptr_t ptr);

int			ft_print_uns(unsigned int uns);
char		*ft_uitoa(unsigned int n);
int			ft_uns_len(unsigned int uns);

int			ft_print_hex(unsigned int hex, const char format);
void		ft_put_hex(unsigned int hex, const char format);
int			ft_hex_len(unsigned int hex);

long int	ft_atoli(const char *nptr);
int			ft_log(int n, int log);
int			ft_pow(int base, int power);
int			ft_inttobin(int n);
#endif
