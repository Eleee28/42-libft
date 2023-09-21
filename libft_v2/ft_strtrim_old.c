/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 07:48:28 by codespace         #+#    #+#             */
/*   Updated: 2023/09/21 09:50:04 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_char(const char *s, char c)
{
	int	i;
	int	found;

	i = 0;
	found = 0;
	while (s[i] && !found)
	{
		if (s[i] == c)
			found = 1;
		else
			i++;
	}
	return (found);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		end;
	int		beg;
	int		aux;

	beg = 0;
	while (s1[beg] && find_char(set, s1[beg]))
		beg++;
	end = ft_strlen(s1);
	while (beg < end && find_char(set, s1[end - 1]))
		end--;
	aux = end - beg + 1;
	str = malloc((aux) * sizeof(char));
	if ((aux) <= 0)
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
/*
#include <stdio.h>

int main(void)
{
    char str[14] = "eoefhellegeoeo";
    char c[2] = "eo";
    char *s;
    
    s = ft_strtrim(str, c);
    printf("%s\n", s);
    free(s);
    return (0);
}
*/
