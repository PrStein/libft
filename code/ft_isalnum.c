#include "libft.h"

int ft_isalnum(int i)
{
  char c;

  c = i;
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
  return (1);
  else
  return (0);
}
