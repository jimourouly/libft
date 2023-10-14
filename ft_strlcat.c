/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:37:34 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/14 12:00:08 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat (char * dst, const char * src, size_t dstsize)
{
	int i;
	int n;
	int tot;

	i = 0;
	n = 0;
	while (dst[i])
		i++;
	while (src[n])
		n++;
	tot = n + i;

	n = 0;
	i = i + 1;
	while (dst && (dstsize > 0))
	{
		dst[i] = src[n];
		i++;
		n++;
		dstsize --;
	}
	return (tot);
}
