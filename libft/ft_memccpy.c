#include "libft.h"
#include <stdio.h>

void *ft_memccpy(void *dest, const void *src, int ch, size_t maxSize)
{
    size_t i;

    i = 0;
    while (i < maxSize)
    {
        *(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
        if (*(unsigned char *)(src + i) == (unsigned char)ch)
            return (dest + i + 1);
        i++;
    }
    return (NULL);
}
