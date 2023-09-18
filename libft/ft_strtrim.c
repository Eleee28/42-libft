/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 07:48:28 by codespace         #+#    #+#             */
/*   Updated: 2023/09/18 10:24:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  find_char(const char *s, char c)
{
    int i;
    int ok;
    
    i = 0;
    ok = 0;
    while (s[i] && !ok)
    {
        if (s[i] == c)
            ok = 1;
        else
            i++;
    }
    return (ok);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     i;
    int     end;
    int     beg;

    beg = 0;
    while (s1[beg] && find_char(set, s1[beg]))
        beg++;
    end = ft_strlen(s1);
    while (beg < end && find_char(set, s1[end - 1]))
    {
        str = malloc((beg - end + 1) * sizeof(*s1));
        end--;
    }
    if (!str)
        return (0);
    i = 0;
    while (beg < end)
    {
        str[i] = s1[beg];
        i++;
        beg++;
    }
    str[i] = 0;
    return (str);
}

#include <stdio.h>

int main(void)
{
    char str[] = "hello world";
    char c[] = "eo";
    
    printf("%s\n", ft_strtrim(str, c));
    return (0);
}