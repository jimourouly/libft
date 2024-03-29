/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:31:53 by jroulet           #+#    #+#             */
/*   Updated: 2024/01/22 15:24:48 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(unsigned int uns)
{
	char	*res;
	int		length;

	length = 0;
	length = ft_uns_len(uns);
	res = (char *)malloc(sizeof(char) * (length + 1));
	if (!res)
		return (0);
	res[length] = '\0';
	while (uns != 0)
	{
		res[length - 1] = uns % 10 + 48;
		uns = uns / 10;
		length--;
	}
	return (res);
}
