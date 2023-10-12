#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>


int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_strlen(char *s);

void *ft_memset(void *s, int c, size_t len);
void *ft_bzero(void *s, size_t len);
#endif
