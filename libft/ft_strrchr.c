#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char *ptr;
    char *aux;

    ptr = 0;
    while (s[i])
    {
        aux = ft_strchr(s, c);
        if (aux != 0)
            ptr = aux;
        i++;
    }
    return (ptr);
}

int main(void)
{
    char *ptr, str[] = "Holoaa";

    ptr = ft_strrchr(str, 'o');
    printf("%s\n", ptr);
    return (0);
}

// Segmentation fault