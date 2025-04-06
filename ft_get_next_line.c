/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanzi <ahanzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:47:06 by nnuno-ca          #+#    #+#             */
/*   Updated: 2025/04/06 11:47:50 by ahanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

static char	*global_buffer[FOPEN_MAX];

void	free_global_buffer(void)
{
	int	fd;

	fd = 0;
	while (fd < FOPEN_MAX)
	{
		if (global_buffer[fd])
		{
			free(global_buffer[fd]);
			global_buffer[fd] = NULL;
		}
		fd++;
	}
}

char	*get_line(char *global_buffer)
{
	size_t	len;
	size_t	i;
	char	*line;

	len = 0;
	i = 0;
	if (!global_buffer[i])
		return (NULL);
	while (global_buffer[len] && global_buffer[len] != '\n')
		len++;
	line = malloc((len + 2) * sizeof(char));
	if (!line)
		return (NULL);
	while (i <= len)
	{
		line[i] = global_buffer[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*read_buffsize(int fd, char *global_buffer)
{
	char	*buffer;
	int		bytes_rd;

	if (global_buffer == NULL)
		global_buffer = calloc(1, sizeof(char));
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_rd = 1;
	while (bytes_rd > 0)
	{
		bytes_rd = read(fd, buffer, BUFFER_SIZE);
		if (bytes_rd == -1 || (bytes_rd == 0 && global_buffer == NULL))
		{
			free(global_buffer);
			free(buffer);
			return (NULL);
		}
		buffer[bytes_rd] = '\0';
		global_buffer = join_n_free(global_buffer, buffer);
		if (ft_isonstr(global_buffer, '\n') == true)
			break ;
	}
	free(buffer);
	return (global_buffer);
}

char	*get_next_line(int fd)
{
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > FOPEN_MAX)
		return (NULL);
	global_buffer[fd] = read_buffsize(fd, global_buffer[fd]);
	if (!global_buffer[fd])
		return (NULL);
	line = get_line(global_buffer[fd]);
	global_buffer[fd] = clean_printed(global_buffer[fd]);
	return (line);
}