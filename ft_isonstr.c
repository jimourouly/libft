/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isonstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jim <jim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:14:21 by jroulet           #+#    #+#             */
/*   Updated: 2025/02/24 14:21:31 by jim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isonstr(const char *str, int ch)
{
	size_t	i;

	i = 0;
	if (!str)
		return (false);
	while (str[i])
	{
		if (str[i] == ch)
			return (true);
		i += 1;
	}
	return (false);
}
