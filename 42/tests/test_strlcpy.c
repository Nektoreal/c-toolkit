#include "../libft.h"
#include <stdio.h>

int main(void)
{
    int failed;
    char    *src = "Hello";
    char    dst[10];

    failed = 0;
    ft_strlcpy(dst, src, 5);

    if (dst[0] == 'H' && dst[5] == '\0')
        printf("[ OK ]");
    else
    {
        printf("[ ERROR ]");
        failed = 1;
    }
    return (failed);
}