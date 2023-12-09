/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:10:15 by jroulet           #+#    #+#             */
/*   Updated: 2023/12/09 15:24:28 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_node_append(node_t *current, int value)
{
    node_t *newnode = ft_node_create_new(value);
    newnode->next = current->next;
    current->next = newnode;

}
