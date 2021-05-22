#include <stdlib.h>
#include "libft.h"

int ft_strlen(char const *src)
{
  int i;

  i = 0;
  while (src[i])
  i++;
  return (i);
}

char *ft_strcat(char const *s1, char const *s2)
{
  int i;
  int j;
  char *dest;

  i = 0;
  j = 0;
  while (s1[i])
  {
    dest[j] = s1[i];
    i++;
    j++;
  }
  i = 0;
  while (s2[i])
  {
    dest[j] = s2[i];
    i++;
    j++;
  }
  return (dest);
}
char *ft_strjoin(char const *s1, char const *s2)
{
  int i;
  char *dest;

  i = ft_strlen(s1) + ft_strlen(s2);
  if (!(dest = malloc(sizeof(char) * i + 1)))
  return (NULL);
  dest = ft_strcat(s1, s2);
  return (dest);
}

#include <stdio.h>
int main(int ac, char **av)
{
  (void)ac;
  printf("%s\n", ft_strcat(av[1], av[2]));
}
