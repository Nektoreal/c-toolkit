#include "../libft.h"
#include <stdio.h>

int main(void)
{
    int     failed;

    failed = 0;
    printf("TEST -- ft_isalnum:\n");
    if (ft_isalnum('a'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }

    if (ft_isalnum('A'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }

    if (ft_isalnum('1'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }
    if (!ft_isalnum('@'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }
    if (!ft_isalnum(32))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }
    if (!ft_isalnum('\\'))
        printf(" -> [ OK ]\n");
    else
    {
        printf(" -> [ ERROR ]\n");
        failed = 1;
    }

    return (failed);
}