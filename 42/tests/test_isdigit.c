#include "../libft.h"
#include <stdio.h>

int main(void)
{
    int     failed;

    failed = 0;
    printf("TEST -- ft_isdigit:\n");
    if (!ft_isdigit('a'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }

    if (!ft_isdigit('A'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }

    if (ft_isdigit('1'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }
    if (!ft_isdigit('@'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }
    return (failed);
}