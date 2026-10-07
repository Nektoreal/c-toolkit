#include "../libft.h"
#include <stdio.h>

int main(void)
{
    int     failed;

    failed = 0;
    printf("TEST -- ft_isascii:\n");
    if (ft_isascii('a'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }

    if (ft_isascii('A'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }

    if (ft_isascii('1'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }
    if (ft_isascii('@'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }
    if (!ft_isascii(128))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }
    return (failed);
}