#include <string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{

    char	*s1 = "MZIRIBMZIRIBMZE123";
			char	*s2 = "MZIRIBMZE";
			size_t	max = strlen(s2);

			char	*i1 = strnstr(s1, s2, max);
			char	*i2 = ft_strnstr(s1, s2, max);

            printf("o- %s\n", i1);
            printf("m- %s\n", i2);



    /*char	dst1[0xF0];
			char	dst2[0xF0];
			char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
			int		size = 0xF0 - 0xF;

    printf("dest 1 original |%s", memmove(dst1, data, size));
    printf("dest 1 mine     |%s", ft_memmove(dst1, data, size));
    printf("dest 2 original |%s", memmove(dst2, data, size));
    printf("dest 2 mine     |%s", ft_memmove(dst2, data, size));*/


    return (0);
}
