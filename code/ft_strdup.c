#include <stdlib.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
  i++;
  return (i);
}

char *ft_strcpy(char *dest, const char *src)
{
  int i;

  i = 0;
  while (src[i])
  {
    dest[i] = src[i];
    i++;
  }
  return (dest);
}

char *ft_strdup(const char *src)
{
  int i;
  char *copy = NULL;

  i = ft_strlen(copy);
  if (!(copy = malloc(sizeof(char) * i + 1)))
  return (NULL);
  copy = ft_strcpy(copy, src);
  return (copy);
}

#include <stdio.h>
int main()
{
  char src[] = "je ne sais pas comment";
  printf("%s\n", ft_strdup(src));
}
