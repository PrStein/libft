/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadjigui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 14:53:23 by sadjigui          #+#    #+#             */
/*   Updated: 2021/06/03 12:10:50 by sadjigui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **str, int i)
{
	while (i)
	{
		i--;
		free(str[i]);
	}
	free(str);
	return (NULL);
}

static char	**count_words(char const *s, char c, char **tab)
{
	int	words;
	int	i;

	words = 1;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		words++;
		while (s[i] == c)
			i++;
	}
	if (s[i] == c)
		words--;
	tab = malloc(sizeof(char *) * words + 1);
	if (!tab)
		return (NULL);
	tab[words] = 0;
	return (tab);
}

static char	**count_letters(char const *s, char c, char **tab)
{
	int	letters;
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		letters = 0;
		while (s[i] == c)
		{
			i++;
			letters++;
		}
		tab[words] = malloc(sizeof(char) * letters + 1);
		if (!tab[words])
		{
			tab = ft_free(tab, words);
			return (NULL);
		}
		tab[words++][letters] = '\0';
		while (s[i] == c)
			i++;
	}
	return (tab);
}

static char	**ft_full(char const *s, char c, char **tab)
{
	int	i;
	int	letters;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		letters = 0;
		while (s[i] == c)
			tab[words][letters++] = s[i++];
		words++;
		while (s[i] == c)
			i++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = NULL;
	if (!c || !s)
		return (NULL);
	while (*s && *s == c)
		s++;
	tab = count_words(s, c, tab);
	if (!tab)
		return (NULL);
	tab = count_letters(s, c, tab);
	if (!tab)
		return (NULL);
	tab = ft_full(s, c, tab);
	return (tab);
}
