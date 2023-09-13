#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t length;

    length = 0;
    while (s[length])
        length++;
    return (length);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
    printf("Original: %d\n", strlen("Hello World!"));
    printf("Mine: %d\n", ft_strlen("Hello World!"));
}
*/