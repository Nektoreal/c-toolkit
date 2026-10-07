#include "../libft.h"
#include <stdio.h>

int main(void)
{
    int     failed;

    failed = 0;
    printf("TEST -- ft_isalpha:\n");
    if (ft_isalpha('a'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }

    if (ft_isalpha('A'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }

    if (!ft_isalpha('1'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }
    if (!ft_isalpha('@'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }
    return (failed);
}