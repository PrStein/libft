#include "libft.h"

int ft_space(const char *str)
{
  int i;

  i = 0;
  while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
  i++;
  return (i);
}

int ft_atoi(const char *str)
{
  int i;
  int sign;
  int result;

  result = 0;
  i = ft_space(str);
  sign = 0;
  if (str[i] == '-' || str[i] == '+')
  {
    if (str[i] == '-')
    sign = 1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
  {
    result = result * 10 + str[i] - 48;
    i++;
  }
  if (sign == 1)
  return (-result);
  else
  return (result);
}
#include <stdlib.h>
#include <stdio.h>
int main(int ac, char **av)
{
  char *str = av[1];
  printf("%d\n", ft_atoi(av[1]));
  printf("%d\n", atoi(av[1]));
}
