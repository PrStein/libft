/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadjigui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 14:53:23 by sadjigui          #+#    #+#             */
/*   Updated: 2021/05/26 11:59:44 by sadjigui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charset(char a, char c)
{
	int	i;

	i = 0;
	if (a == c)
		return (1);
	else
		return (0);
}

char	**free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free (tab[i]);
		i++;
	}
	free (tab);
	return (tab);
}

char	**count_words(char const *s, char c, char **tab)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && ft_charset(s[i], c) == 0)
			i++;
		words++;
		while (s[i] && ft_charset(s[i], c) == 1)
			i++;
	}
	tab = malloc(sizeof(char *) * words + 1);
	if (!tab)
		return (NULL);
	tab[words] = 0;
	return (tab);
}

char	**count_letters(char const *s, char c, char **tab)
{
	int	letters;
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		letters = 0;
		while (s[i] && ft_charset(s[i], c) == 0)
		{
			i++;
			letters++;
		}
		tab[words] = malloc(sizeof(char) * letters + 1);
		if (!tab[words])
		{
			free_tab(tab);
			return (NULL);
		}
		tab[words][letters] = '\0';
		words++;
		while (s[i] && ft_charset(s[i], c) == 1)
			i++;
	}
	i = 0;
	while (tab[i])
	{
		free (tab[i]);
		i++;
	}
	return (tab);
}

char	**ft_full(char const *s, char c, char **tab)
{
	int	i;
	int	letters;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		letters = 0;
		while (s[i] && ft_charset(s[i], c) == 0)
		{
			tab[words][letters] = s[i];
			letters++;
			i++;
		}
		while (s[i] && ft_charset(s[i], c) == 1)
			i++;
		words++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = NULL;
	while (*s && ft_charset(*s, c) == 1)
		s++;
	tab = count_words(s, c, tab);
	tab = count_letters(s, c, tab);
	tab = ft_full(s, c, tab);

	return (tab);
}
