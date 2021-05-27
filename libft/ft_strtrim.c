#include "libft.h"

int ft_charset_trim(char c, char const *charset)
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

int ft_strtrim_count(char const *s1, char const *set)
{
  int i;
  int j;
  int z;

  i = 0;
  z = 0;
  while (s1[i])
  {
      j = 0;
    while (s1[i] && ft_charset_trim(s1[i], &set[j]) == 0)
    {
        z++;
        j++;
    }
    while (s1[i] && ft_charset_trim(s1[i], &set[j]) == 1)
        i++;
}

  return (z);
}
char *ft_strtrim_cut(char const *s1, char const *set, char *dest)
{
  int i;
 // int j;
  int c;

  i = 0;
  c = 0;
  while (s1[i])
  {
    //j = 0;
    while (s1[i] && ft_charset_trim(s1[i], set) == 0)
    {
      dest[c] = s1[i];
      c++;
      i++;
    }
    while (s1[i] && ft_charset_trim(s1[i], set) == 1)
    i++;
  }
  return (dest);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    char *dest;

    dest = NULL;
    i = ft_strtrim_count(s1, set) + 1;
    dest = ft_calloc(i, 1);
    dest = ft_strtrim_cut(s1, set, dest);
    return (dest);
}
#include <stdio.h>
int main(int ac, char **av)
{
  (void)ac;
  printf("%s\n", ft_strtrim(av[1], av[2]));
}
