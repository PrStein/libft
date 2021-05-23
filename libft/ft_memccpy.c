//#include "libft.h"
//#include <stddef.h>
#include <stdio.h>

void *memccpy(void *dest, const void *src, int ch, size_t maxSize)
{
  unsigned char *a;
  unsigned char *b;
  size_t x;

  x = 0;
  a = (unsigned char *)dest;
  b = (unsigned char *)src;
  while (x < maxSize && *b != ch)
  {
    *a++ = *b++;
    x++;
  }
  return (dest);
}

int main()
{
  void *dest;
  void *src;
  src = "je ne saias pas comment";
  int ch = 110;
  size_t size = sizeof(int) * 12;
  dest = memccpy(dest, src, ch, size);
  printf("%s\n", (char *)dest);
}
