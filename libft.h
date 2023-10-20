/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 08:54:15 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/16 20:20:06 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <bsd/string.h>


int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *nptr);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strdup(const char *s1);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(const char *s1, const char *set);

void *ft_memset(void *s, int c, size_t len);
void ft_bzero(void *s, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t ni);
void *ft_calloc(size_t count, size_t size);

size_t ft_strlcpy(char * dst, const char *  src, size_t dstsize);
size_t ft_strlcat(char * dst, const char * stc, size_t dstsize);
#endif
