#include "libft.h"

void *ft_memset(void *pointer, int value, size_t count)
{
    size_t i;

    i = 0
    if (!pointer)
        return (NULL);
    while (i < count)
    {
        *(unsigned char *)(pointer + i) = (unsigned char)value;
        i++;
    }
    return (pointer);
}
