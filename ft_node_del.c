/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:40:39 by jroulet           #+#    #+#             */
/*   Updated: 2023/12/09 15:43:57 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_node_del(node_t *head)
{
	node_t *temp;
	while(head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
