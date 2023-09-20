#include "libft.h"

static int count_digits(int n)
{
    int digits;
    int aux;

    digits = 0;
    aux = n;
    while (aux != 0)
    {
        digits++;
        aux /= 10;
    }
    if (n < 0)
        digits++;
    return (digits);
}

static int  ft_abs(int n)
{
    if (n < 0)
        n *= -1;
    return (n);
}

char    *ft_itoa(int n)
{
    char    *str;
    int     i;
    int     len;
    int     end;

    len = count_digits(n);
    str = malloc(len);
    i = 0;
    if (n < 0)
    {
        str[i] = '-';
        i++;
    }
    end = len - 1;
    while (end >= i)
    {
        str[end] = (char){(ft_abs(n % 10)) + '0'};
        n /= 10;
        end--;
    }
    return (str);
}
/*
#include <stdio.h>

int main(void)
{
    printf("%s\n", ft_itoa(2147483647));
    return (0);
}
*/