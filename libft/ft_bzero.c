static void *ft_memset(void *s, int c, unsigned long n)
{
    unsigned char   *aux;

    aux = (unsigned char *)s;
    while (n > 0)
    {
        *aux = (unsigned char)c;
        aux++;
        n--;
    }
    return (s);
}

void ft_bzero(void *s, unsigned long n)
{
    ft_memset(s, '\0', n);
}

#include <stdio.h>

int main()
{
    char str[] = "Hello World!";
    printf("Original string: %s\n", str);
    ft_bzero(str, 7);
    printf("Modified string: %s\n", str);
    return (0);
}

// put zeroes in the n bytes of the memory starting at s