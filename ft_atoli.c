/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoli.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:22:30 by jroulet           #+#    #+#             */
/*   Updated: 2024/02/11 13:53:58 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int ft_atoli(const char *nptr)
{
	long int	i;
	long int	res;
	long int	neg;

	i = 0;
	neg = 1;
	res = 0;

	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <='9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * neg);

}
