/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <jroulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:22:15 by jroulet           #+#    #+#             */
/*   Updated: 2024/04/10 18:07:56 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_log(int n, int log)
{
	int	res;

	res = 0;
	while (n > 1)
	{
		n /= log;
		res++;
	}
	return (res);
}
