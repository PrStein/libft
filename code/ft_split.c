#include <stdlib.h>
include "libft.h"

int ft_charset(char a, char c)
{
  int i;

  i = 0;
  if (a == c)
  return (1);
  else
  return (0);
}

char **count_words(char const *s, char c, char **tab)
{
  int words;
  int i;

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
  if (!(tab = malloc(sizeof(char*) * words + 1)))
  return (NULL);
  tab[words] = 0;
  return (tab);
}

char **count_letters(char const *s, char c, char **tab)
{
  int letters;
  int words;
  int i;

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
    if (!(tab[words] = malloc(sizeof(char) * letters + 1)))
    return (NULL);
    tab[words][letters] = '\0';
    words++;
    while (s[i] && ft_charset(s[i], c) == 1)
    i++;
  }
  return (tab);
}

char **ft_full(char const *s, char c, char **tab)
{
  int i;
  int letters;
  int words;

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

char **ft_split(char const *s, char c)
{
  char **tab;

  tab = NULL;
  while (*s && ft_charset(*s, c) == 1)
  s++;
  tab = count_words(s, c, tab);
  tab = count_letters(s, c, tab);
  tab = ft_full(s, c, tab);
  return (tab);
}

#include <stdio.h>

int main(int ac, char **av)
{
  char *str = av[1];
  char c = ' ';
  char **dest = ft_split(str, c);
  int i = 0;
  while (dest[i])
  {
    printf("%s\n", dest[i]);
    i++;
  }
}
