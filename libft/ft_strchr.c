/*
char *ft_strchr(char *s, int c)
{
    char *ptr;
    int i;

    ptr = 0;
    i = 0;
    while (s[i] && ptr == 0)
    {
        if (s[i] == c)
            ptr = &s[i];
        i++;
    }
    return (ptr);
}   // Segmentation fault when not found!!
*/

#include "libft.h"

char *ft_strchr(const char *str, int c)     // Check
{
    while (*str != (char)c)
    {
        if (!*str)
            return (0);
        else
            str++;
    }
    return (char *)str;
}
/*
#include <string.h>

int main()
{
    char *ptr, str[] = "Holaa";

    ptr = ft_strchr(str, '\0');
    printf("%s\n", ptr);
    return (0);
}
*/