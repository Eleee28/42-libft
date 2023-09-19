#include "libft.h"
#include <stdio.h>

char    *ft_itoa(int n)
{
    int digits;
    int aux;

    digits = 0;
    aux = n;
    while (aux != 0)    // count number of digits to do malloc
    {
        digits++;
        aux /= 10;
    }
    if (n < 0)
        digits++;
    printf("%d\n", digits);
    return (0);
}

int main(void)
{
    ft_itoa(-12);
}