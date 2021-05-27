#include <string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{

    char	*src = "abbbbbbbb";

    		char	*d1 = strrchr(src, 'a');
    		char	*d2 = ft_strrchr(src, 'a');
        printf("dest 1 original |%s\n", d1);
        printf("dest 1 mine     |%s\n", d2);
//        printf("dest 2 original |%s\n", d1);
//        printf("dest 2 mine     |%s\n", d2);


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
