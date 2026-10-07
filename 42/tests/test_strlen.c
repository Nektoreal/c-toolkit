#include "../libft.h"
#include <stdio.h>

int main(void)
{
    int failed;
    char    *str = "Hello";

    failed = 0;

    if (ft_strlen(str) == 5)
        printf("[ OK ]");
    else
    {
        printf("[ ERROR ]");
        failed = 1;
    }
    return (failed);
}