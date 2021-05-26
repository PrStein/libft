#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    unsigned int z;
    char *dest;

    dest = NULL;
    z = 0;
    i = 0;
//    if (start <= len)
//    {
        while (i < start)
            i++;
        dest = malloc(sizeof(char) * len + 1);
        if (!dest)
            return (NULL);
        while (i < len)
            dest[z++] = s[i++];
//    }
        while(dest[z])
            dest[z++] = '\0';
//    dest[z] = '\0';
    return (dest);
}
