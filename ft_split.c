/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:15:31 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/21 20:33:02 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *str, char sep)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == sep))
			i++;
		if (str[i] && str[i] != sep)
		{
			while (str[i] && str[i] != sep)
				i++;
			cnt++;
		}
	}
	return (cnt);
}

int	word_len(const char *str, char sep)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (str[i] && str[i] != sep)
	{
		cnt++;
		i++;
	}
	return (cnt);
}

void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
				i++;
	}
	free(tab);
}

static char	*createtab(int i)
{
	char	*tab;

	tab = malloc((i + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	tab[0] = '0';
	return (tab);
}

char	**ft_split(const char *str, char sep)
{
	int		i;
	int		j;
	char	**tab;
	int		l;
	int		len;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (count_word(str, sep) + 1));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (str[i] && (str[i] == sep))
			i++;
		if (str[i])
		{
			len = word_len(str + i, sep);
			if (!(tab[j] = malloc(sizeof(char) * (len + 1))))
				return (NULL);
			l = 0;
			while (l < len)
			{
				tab[j][l++] = str[i++];
			}
			tab[j++][len] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
	ft_free(tab);
}
