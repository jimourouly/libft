/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:00:03 by jroulet           #+#    #+#             */
/*   Updated: 2023/12/09 14:28:44 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

node_t *ft_node_find(node_t *head, int value)
{
	node_t *temp = head; 
	while (temp != NULL)
	{
		if (temp->value == value)
			return temp;
		temp = temp->next;
	}
	return NULL;
}
