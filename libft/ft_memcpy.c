#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t size)
{
    size_t i;

    i = 0;
    if (!dest && !src)
        return (NULL);
    while (size > 0)
    {
        *(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
        size--;
        i++;
    }
  return (dest);
}
