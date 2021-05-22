#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int ft_charset(char c, char const *charset)
{
  int i;

  i = 0;
  while (charset[i])
  {
    if (c == charset[i])
    return (1);
    i++;
  }
  return (0);
}
/*int ft_strlen(char const *str)
{
  int i;

  i = 0;
  while (str[i])
  i++;
  return (i);
}*/
char *ft_mallocstr(int i, int j, char *dest)
{
  if (!(dest = malloc(sizeof(char) * (i - j) + 1)))
  return (NULL);
  return (dest);
}
int ft_strtrimz(char const *s1, char const *set)
{
  int i;
  int j;
  int z;

  i = 0;
  z = 0;
  while (s1[i])
  {
    j = 0;
    while (set[j])
    {
      if (s1[i] == set[j])
      z++;
      j++;
    }
    i++;
  }
  return (z);
}
char *ft_strtrimr(char const *s1, char const *set, char *dest)
{
  int i;
  int j;
  int c;

  i = 0;
  c = 0;
  while (s1[i])
  {
    j = 0;
    while (s1[i] && ft_charset(s1[i], set) == 0)
    {
      dest[c] = s1[i];
      c++;
      i++;
    }
    while (s1[i] && ft_charset(s1[i], set) == 1)
    i++;
  }
  return (dest);
}
char *ft_strtrim(char const *s1, char const *set)
{
  int i;
  int j;
  char *dest;

  j = 0;
  dest = NULL;
  i = ft_strtrimz(s1, set);
  while (s1[j])
  j++;
  dest = ft_mallocstr(j, i, dest);
  dest = ft_strtrimr(s1, set, dest);
  return (dest);
}

int main(int ac, char **av)
{
  (void)ac;
  printf("%s\n", ft_strtrim(av[1], av[2]));
}
