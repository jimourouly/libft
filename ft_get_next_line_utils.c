/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jim <jim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:09:46 by jroulet           #+#    #+#             */
/*   Updated: 2025/02/24 14:23:21 by jim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list_char	*ft_find_last_node(t_list_char *head)
{
	t_list_char	*current;

	current = head;
	if (current == NULL)
		return (NULL);
	while (current && current->next)
	{
		current = current->next;
	}
	return (current);
}

int	ft_new_line(t_list_char *head)
{
	int			i;
	t_list_char	*temp;

	if (head == NULL)
		return (0);
	temp = ft_find_last_node(head);
	i = 0;
	while (temp->cont[i])
	{
		if (temp->cont[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	create_line(char **line, t_list_char *node)
{
	int	i;
	int	len;

	len = 0;
	while (node)
	{
		i = 0;
		while (node->cont[i])
		{
			if (node->cont[i] == '\n')
			{
				len ++;
				break ;
			}
			len ++;
			i++;
		}
		node = node->next;
	}
	*line = malloc(sizeof(char) * (len + 1));
}

void	free_node(t_list_char *node)
{
	t_list_char	*current;
	t_list_char	*next;

	if (node == NULL)
		return ;
	current = node;
	while (current)
	{
		free(current->cont);
		next = current->next;
		free(current);
		current = next;
	}
}

int	ft_strlen_int(const char *str)
{
	int	len;

	len = 0;
	while (*(str++))
		len++;
	return (len);
}
