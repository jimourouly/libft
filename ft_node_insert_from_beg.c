/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_from_beg.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:59:26 by jroulet           #+#    #+#             */
/*   Updated: 2023/12/09 14:29:12 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

node_t *ft_node_insert_from_beg(node_t **head, node_t *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
	return node_to_insert;
}
