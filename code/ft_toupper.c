#include "libft.h"

int ft_toupper(int i)
{
  char c;

  c = i;
  if ((c >= 'a' && c <= 'z')
  c -= 32;
  return (c);
}
