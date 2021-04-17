#include <stdlib.h>
#include <stdio.h>

char *ft_reverse_substr(char const *s, unsigned int start, size_t len, char *dest)
{
  unsigned int i;
  int z;
  int shit;
  (void)len;
//  char *dest;

  i = 0;
  z = 0;
  shit = start * -1;
  dest = NULL;
  while (s[i])
  i++;
  if (!(dest = malloc(sizeof(char) * shit + 1)))
  return (NULL);
  i += start;
  while (s[i])
  {
    dest[z] = s[i];
    z++;
    i++;
  }
  return (dest);
}

char *ft_normal_substr(char const *s, unsigned int start, size_t len, char *dest)
{
  unsigned int i;
  //char *dest;
  int shit;
  int z;

  z = 0;
  dest = NULL;
  i = 0;
  shit = len - start;
  while (i < start)
  i++;
  if (!(dest = malloc(sizeof(char) * shit + 1)))
  return (NULL);

  while (s[i] && i < len)
  {
      //printf("ici");
    dest[z] = s[i];
    i++;
    z++;
  }
  return (dest);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char *dest = NULL;

/*  if (start > len)
  {
      printf("ici\n");
    return (NULL);
  } */
  if (start > 0)
  {
    dest = ft_normal_substr(s, start, len, dest);
  }
  else if (start < 0)
  {
    dest = ft_reverse_substr(s, start, len, dest);
  }
  return (dest);
}

int main()
{
  //int i = 0;
  char dest[] = "je ne suis pas sur";
/*  while (dest[i])
  i++;
  printf("%d\n", i);
  i = 0;
  while (i < 4)
  {
    printf("%c", dest[i]);
    i++;
  }
  printf("\n"); */
  printf("%s\n", ft_substr(dest, -5, sizeof(char) * 18));
}
