#include <string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
    char s[] = "tripouille";

    printf("[%p]\n", ft_strchr(s, 0));
    printf("[%p]\n", strchr(s, 0));
    return (0);
}
