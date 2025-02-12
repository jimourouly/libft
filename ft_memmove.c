/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:06:45 by jroulet           #+#    #+#             */
/*   Updated: 2025/02/12 18:20:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	char		*sour;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dest = (char *) dst;
	sour = (char *) src;
	if (dest > sour && dest < sour + len)
	{
		while (len-- > 0)
			dest[len] = sour[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = sour[i];
			i++;
		}
	}
	return (dst);
}
