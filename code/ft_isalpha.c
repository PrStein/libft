#include "libft.h"

int ft_isalpha(int i)
{
  char c;

  c = i;
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
  return (1);
  else
  return (0);
}
#include <stdio.h>
int main()
{
  printf("%d\n", ft_isalpha(36));
}
