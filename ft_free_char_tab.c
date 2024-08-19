/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_char_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <jroulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:44:40 by jroulet           #+#    #+#             */
/*   Updated: 2024/08/19 18:56:04 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_char_tab(char **chartab)
{
	size_t	i;

	i = 0;
	if (!chartab)
		return ;
	while (chartab[i])
	{
		free(chartab[i]);
		chartab[i] = NULL;
		i += 1;
	}
	if (i > 0)
		free(chartab);
	chartab = NULL;
}
