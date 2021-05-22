#include <stdlib.h>
#include "libft.h"

int ft_count_nb(int nb)
{
  int i;

  i = 1;
  while (nb >= 10)
  {
    nb /= 10;
    i++;
  }
  if (nb > 0)
  {
    nb = -nb;
    i++;
  }
  return (i);
}

char *ft_itoa(int n)
{
  int i;
  long nb;
  char *dest;
  int sign;

  i = ft_count_nb(n);
  nb = n;
  sign = 0;
  dest = NULL;
  if (!(dest = malloc(sizeof(char) * i + 1)))
  return (NULL);
  if (nb < 0)
  {
    sign = 1;
    *dest = '-';
  }
  while (nb >= 0 + sign)
  {
    dest[i] = nb % 10 + '0';
    nb /= 10;
    i--;
  }
  return (dest);
}
