/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 08:54:15 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/14 12:53:07 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>


int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_strlen(char *s);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);

void *ft_memset(void *s, int c, size_t len);
void ft_bzero(void *s, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);

size_t ft_strlcpy(char * dst, const char *  src, size_t dstsize);
size_t ft_strlcat(char * dst, const char * stc, size_t dstsize);
#endif
