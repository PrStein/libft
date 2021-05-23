#include "libft.h"

void *memcpy(void *destination, const void *source, size_t size)
{
  unsigned char *a;
  unsigned char *b;

  a = (unsigned char *)destination;
  b = (unsigned char *)source;
  while (size > 0)
  {
    *a++ = *b++;
    size--;
  }
  return (destination);
}
