#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
  void *trace;
  if (!(trace = malloc(count * size)))
  return (NULL);
  while (*trace)
  {
    *trace = 0;
    trace++;
  }
  return (trace);
}
