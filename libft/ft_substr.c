#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    int shit;
    int z;
    char *dest;

    dest = NULL;
    z = 0;
    dest = NULL;
    i = 0;
    shit = len - start;
    while (i < start)
        i++;
    if (!(dest = malloc(sizeof(char) * shit + 1)))
        return (NULL);
    while (s[i] && i < len)
    {
        dest[z] = s[i];
        i++;
        z++;
    }
    return (dest);
}
