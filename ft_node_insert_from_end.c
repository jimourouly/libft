/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_node_from_end.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:08:58 by jroulet           #+#    #+#             */
/*   Updated: 2023/12/09 14:29:34 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_node_insert_from_end(node_t **head, node_t* newnode)
{
    if(*head == NULL)
    {
        *head = newnode;
    }
    else 
    {
        node_t *current = *head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = newnode;
    }
}
