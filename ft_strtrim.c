/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:50:47 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/20 17:50:49 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static  int to_delete(const char * set, char c)
{
	int i;

	i = 0;
	while(set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char *new_str(const char *s1, size_t start, size_t len)
{
    char *str;
    size_t i;

    i = 0;
    if(len <= 0 || start >= ft_strlen(s1))
        return(ft_strdup(""));

    str = ft_calloc(len + 1, sizeof(char));
    if(!str)
        return (NULL);
    i = 0;

    while(i < len)
    {
        str[i] = s1[start + i];
        i++;
	}
    
    return (str);
}

char *ft_strtrim(const char *s1, const char *set)
{
	int i;
	int j;
	
	i = 0;
	j = (ft_strlen(s1) - 1);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));

/* Loop until first char not on "set"*/
	while (to_delete(set, s1[i]))
        i++;
/* Loop form the end to the last char not on "set"*/
    while(to_delete(set, s1[j]))
        j--;
        
    if (j < i)
	return (ft_strdup(""));

    /*
     * Example
     * s1 = AAA|BAB|AAAA
     * set = A
     * s1 length = 10
     * i = 3
     * j (len minus last non set char) = 5
     * 
     * j - (i - 1) = 5 - (3 - 1) = 5 - (2) = 3
     * new malloc = 3 */
    return (new_str(s1, i, j - (i -1)));
}

