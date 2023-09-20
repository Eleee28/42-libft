#include "libft.h"

static int  times_in_str(char const *s, char c)
{
    int i;
    int times;

    i = 0;
    times = 0;
    while (s[i])
    {
        if (s[i] == c)
            times++;
        i++;
    }
    return (times);
}

static void str_cpy(char const *s, char c, char **str)
{
    int row;
    int col;
    int i;

    row = 0;
    i = 0;
    while (s[i])
    {
        col = 0;
        while (s[i] && s[i] != c)
        {
            str[row][col] = s[i];
            i++;
            col++;
        }
        i++;
        row++;
    }
}

static void free_mem(char **str)
{
    
}

char    **ft_split(char const *s, char c)
{
    int     i;
    char    **str;
    int     row;
    int     prev_i;

    str = malloc((times_in_str(s, c) + 2) * sizeof(char *));
    i = 0;
    row = 0;
    prev_i = 0;
    while (s[prev_i + i])
    {
        while (s[prev_i + i] && s[prev_i + i] != c)
            i++;
        str[row] = malloc(i);
        row++;
        i++;
        prev_i += i;
        i = 0;
    }
    str[row] = malloc(1);
    str[row][0] = 0;
    str_cpy(s, c, str);
    return (str);
}
/*
#include <stdio.h>

int main(void)
{
    char s[] = "abdhabhj";
    char c = 'h';
    char **str;
    int   i, j;

    i = 0;
    j = 0;
    str = ft_split(s, c);
    while (i < 3)
    {
      while (j < 3)
      {
        printf("%c ", str[i][j]);
        j++;
      }
      j = 0;
      printf("\n");
      i++;
    }
      
    i = 0;
    while (i < 3)
    {
      free(str[i]);
      i++;
    }
    free(str);
    return (0);
}
*/