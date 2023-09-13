#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *aux;

    aux = s;
    while (n > 0)
    {
        *aux = (unsigned char)c;
        aux++;
        n--;
    }
    return (s);
}
/*
#include <stdio.h>

int     main(void)
{
        char    str[] = "Hello World!";
        printf("Original string: %s\n", str);
        ft_memset(str, 'a', 7);
        printf("Modified string: %s\n", str);
        return (0);
}
*/