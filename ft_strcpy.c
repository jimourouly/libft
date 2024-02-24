/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:09:37 by jroulet           #+#    #+#             */
/*   Updated: 2024/02/24 13:09:39 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_strcpy(char *dst, const char *src)
{
    while (*src)
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0'; // Don't forget to add the null terminator
}
