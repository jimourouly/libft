/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:51:58 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/14 15:19:23 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{

	unsigned char *str;
	unsigned char tofind;

	str = (unsigned char*) s;
	tofind = (unsigned char)c;
	while(n)
	{
		if(*str == (unsigned char)c)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
