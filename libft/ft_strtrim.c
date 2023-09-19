#include "libft.h"

static int  find_char(char const *s, char c)
{
    int i;
    int found;
    
    i = 0;
    found = 0;
    while (*(s + i) && !found)
    {
        if (s[i] == c)
            found = 1;
        else
            i++;
    }
    return (found);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     i;
    int     end;
    int     beg;
    int        aux;

    beg = 0;
    while (s1[beg] && find_char(set, s1[beg]))
        beg++;
    end = ft_strlen(s1);
    while (beg < end && find_char(set, s1[end - 1]))
        end--;
    aux = end - beg + 1;
    str = malloc(aux);
    if (aux <= 0)
        return (0);
    ft_strlcpy(str, &s1[beg], (end - beg + 1));
    return (str);
}

/*
---- SUSTITUIDO POR ft_strlcpy
    i = 0;
    while (beg < end)
    {
        str[i] = s1[beg];
        i++;
        beg++;
    }
    str[i] = 0;
*/

#include <stdio.h>

int main(void)
{
    char str[] = "eobeooaeoeo";
    char c[] = "eo";
    char *s;
    
    s = ft_strtrim(str, c);
    printf("%s\n", s);
    free(s);
    return (0);
}