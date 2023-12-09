/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_new_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:57:58 by jroulet           #+#    #+#             */
/*   Updated: 2023/12/09 14:28:16 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

node_t *ft_node_create_new(int value)
{
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;

	return result;
}
