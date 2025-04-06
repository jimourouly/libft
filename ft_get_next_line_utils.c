/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanzi <ahanzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:09:46 by jroulet           #+#    #+#             */
/*   Updated: 2025/04/06 11:45:50 by ahanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*clean_printed(char	*global_buffer)
{
	size_t	i;
	char	*new;
	size_t	j;

	i = 0;
	while (global_buffer[i] && global_buffer[i] != '\n')
		i++;
	if (!global_buffer[i])
	{
		free(global_buffer);
		return (NULL);
	}
	new = malloc((((int)ft_strlen(global_buffer) - i) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i++;
	j = 0;
	while (global_buffer[i])
		new[j++] = global_buffer[i++];
	new[j] = '\0';
	free(global_buffer);
	return (new);
}

char	*join_n_free(char *global_buffer, char *local_buffer)
{
	size_t	len_global;
	size_t	len_local;
	char	*appended;
	size_t	i;
	size_t	j;

	if (!global_buffer || !local_buffer)
		return (NULL);
	len_global = ft_strlen(global_buffer);
	len_local = ft_strlen(local_buffer);
	appended = malloc((len_global + len_local + 1) * sizeof(char));
	if (!appended)
		return (NULL);
	i = 0;
	j = 0;
	while (j < len_global)
		appended[i++] = global_buffer[j++];
	j = 0;
	while (j < len_local)
		appended[i++] = local_buffer[j++];
	appended[i] = '\0';
	free(global_buffer);
	return (appended);
}
