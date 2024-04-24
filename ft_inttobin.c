/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttobin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <jroulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:45:08 by jroulet           #+#    #+#             */
/*   Updated: 2024/04/24 17:21:32 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inttobin(int n)
{
	int	binary;
	int	i;

	binary = 0;
	i = 0;
	while (n > 0)
	{
		binary += (n % 2) * ft_pow(10, i);
		n /= 2;
		i++;
	}
	return (binary);
}
