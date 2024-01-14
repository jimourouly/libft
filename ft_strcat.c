/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 07:56:46 by jroulet           #+#    #+#             */
/*   Updated: 2023/06/15 09:15:05 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
*/
char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{


	char src[10]	= "abc";
	char dest[10]	= "123";
	char src2[10]	= "abc";
	char dest2[10]	= "123";
	printf("Str: %s \n", strcat(dest2, src2));
	printf("Str: %s\n", ft_strcat(dest, src));
	return (0);
}*/
