/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:34:41 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/14 14:40:48 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	char a;
	char b;

	i = 0;
	if ( n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n -1)
		i++;
	a = s1[i];
	b = s2[i];
	return (a - b);
}
