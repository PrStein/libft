#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t size)
{
    size_t i;

/*    if (dest > src)
    {
        i = size;
        while (i >= 0)
        {
            *(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
            i--;
        }
    }
    else
    {*/
        i = 0;
        if (!src && !dest)
            return (NULL);
        while (i < size)
        {
            *(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
            i++;
        }

    return (dest);
}
