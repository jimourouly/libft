/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_node_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:08:00 by jroulet           #+#    #+#             */
/*   Updated: 2023/12/09 15:27:24 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_node_print_list(node_t *head)
{
	int i = 0;
	node_t *temp = head;
	while(temp != NULL)
	{
		temp->step = i;
		printf("node :%d: -  value :%d:\n", temp->step, temp->value);
		temp = temp->next;
		i++;
	}
	printf("\n");
}
