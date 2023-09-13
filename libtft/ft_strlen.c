unsigned long ft_strlen(const char *s)
{
    unsigned long length;

    length = 0;
    while (s[length])
        length++;
    return (length);
}

#include <string.h>
#include <stdio.h>

int main()
{
    printf("Original: %d\n", strlen("Hello World!"));
    printf("Mine: %d\n", ft_strlen("Hello World!"));
}