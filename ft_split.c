/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:15:31 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/20 21:13:06 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_word(const char *str, char sep)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == sep ))
			i++;
		if (str[i] && str[i] != sep )
		{
			while (str[i] && str[i] != sep)
				i++;
			cnt++;
		}
	}
	return (cnt);
}

int		word_len(const char *str, char sep)
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (str[i] && str[i] != sep )
	{
		cnt++;
		i++;
	}
	return (cnt);
}

void ft_free(char **tab)
{
	int i;
	i = 0;

	if (!tab)
		return;
	while (tab[i])
	{
		free(tab[i]);
				i++;
	}
	free(tab);
}

char **ft_split(const char *str, char sep)
{
    int i = 0;
    int j = 0;
    int k;
    char **tab;
	int l;

    if (!(tab = malloc(sizeof(char *) * (count_word(str, sep) + 1))))
        return (NULL);
    while (str[i])
    {
        while (str[i] && (str[i] == sep))
            i++;
        if (str[i])
        {
            k = 0;
            int len = word_len(str + i, sep);
            if (!(tab[j] = malloc(sizeof(char) * (len + 1))))
                return (NULL);
            l = 0;
			while (l < len)
			{
				tab[j][l] = str[i];
				i++;
				l++;
			}
            tab[j][len] = '\0';
            j++;
        }
    }
    tab[j] = NULL;
    return (tab);
	ft_free(tab);
}
