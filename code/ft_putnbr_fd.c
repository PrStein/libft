#include <unistd.h>
#include "libft.h"

void ft_putchar(char c, int fd)
{
  write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
  if (n < 0)
  {
    ft_putchar('-', fd);
    if (n == -2147483648)
      write(fd, "2147483648", 10);
      n = -n;
  }
  if (n >= 10)
  {
    ft_putnbr_fd(n / 10, fd);
    ft_putnbr_fd(n % 10, fd);
  }
  else if (n >= 0 && n <= 9)
  ft_putchar(n + '0',fd);
}

int main()
{
  ft_putnbr_fd(-63, 1);
}
