#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    const char *aux_src;
    char *aux_dest;

    aux_src = src;
    aux_dest = dest;

    i = 0;
    while (i < n && aux_src[i])
    {
        aux_dest[i] = aux_src[i];
        i++;
    }
    return (dest);
}
/*
int main(void)
{
    char src[] = "Hello World!", dest[] = "Hola Mundo!", *ptr;
    printf("Src: %s\n", src);
    printf("Original dest: %s\n", dest);
    ptr = (char *)ft_memcpy(dest, src, 7);
    printf("Modified dest: %s\n", ptr);
    return (0);
}
*/