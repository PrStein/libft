#include <stdlib.h>
#include <stdio.h>
int ft_charset(char a, char c)
{
  if (a == c)
  return (1);
  else
  return (0);
}

char **ft_count_word(char const *s, char c, char **dest)
{
  int word;
  int i;

  word = 0;
  i = 0;
  while (s[i])
  {
    while (s[i] && ft_charset(s[i], c) == 0)
    {
      i++;
    }
  //  printf("word\n");
    word++;
    while (s[i] && ft_charset(s[i], c) == 1)
    {
      i++;
    }
  //  printf("word\n");
  }
  if (!(dest = malloc(sizeof(char) * word + 1)))
  return (NULL);
  dest[word] = 0;
  return (dest);
}
char **ft_count_letter(char const *s, char c, char **dest)
{
  int word;
  int letter;
  int i;

  word = 0;
  i = 0;
  while (s[i])
  {
  //  printf("letter\n");
    letter = 0;
    while (s[i] && ft_charset(s[i], c) == 0)
    {
      letter++;
      i++;
    }
    if (!(dest[word] = malloc(sizeof(char) * letter + 1)))
    return (NULL);
    dest[word][letter] = '\0';
    word++;
    while (s[i] && ft_charset(s[i], c) == 1)
    {
      i++;
    }
  //  printf("letter\n");
  }
  return (dest);
}
char **ft_full(char const *s, char c, char **dest)
{
  int word;
  int letter;
  int i;

  word = 0;
  i = 0;
  while (s[i])
  {
///    printf("full\n");
    letter = 0;
    while (s[i] && ft_charset(s[i], c) == 0)
    {
      dest[word][letter] = s[i];
      letter++;
      i++;
    }
    word++;
    while (s[i] && ft_charset(s[i], c) == 1)
    {
      i++;
    }
//    printf("full\n");
  }
  return (dest);
}
char **ft_split(char const *s, char c)
{
  char **dest;

  dest = NULL;
  while (*s && ft_charset(*s, c) == 1)
  s++;
  dest = ft_count_word(s, c, dest);
  dest = ft_count_letter(s, c, dest);
  dest = ft_full(s, c, dest);
  return (dest);
}

int main(int ac, char **av)
{
  char *str = av[1];
  char charset = ' ';
  char **dest = ft_split(str, charset);
  int i = 0;
  while (dest[i])
  {
    printf("%s\n", dest[i]);
    i++;
  }
}
