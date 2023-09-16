#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    size_t  i;

    if (nmemb == 0 || size == 0)
        //return (0);
        ptr = 0;
    else if (nmemb * size > ) //r results in integer overflow)
        //return (-1);
        ptr = -1;
    else
    {
        ptr = (void *)malloc(nmemb * size);
        i = 0;
        while (i++ < nmemb)
            ptr[i] = 0;
    }
    return (ptr);
}

/* I don't know if this is okay */