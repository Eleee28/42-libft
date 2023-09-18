/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:35 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/18 06:02:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	str_cnt;
	size_t	to_find_cnt;
	size_t	aux;

	str_cnt = 0;
	to_find_cnt = 0;
	aux = str_cnt;
	if (!to_find[to_find_cnt])
		return ((char *)str);
	while (str[str_cnt] && str_cnt < size)
	{
		if (str[str_cnt] == to_find[to_find_cnt] && str_cnt < size)
		{
			while (str[str_cnt] && to_find[to_find_cnt]
				&& str[str_cnt] == to_find[to_find_cnt])
			{
				str_cnt++;
				to_find_cnt++;
			}
			if (!to_find[to_find_cnt])
				return ((char *)str[str_cnt]);
			to_find_cnt = 0;
			str_cnt++;// = str[str_cnt] + 1;
		}
		else
			str_cnt++;
	}
	return (0);
}
*/

/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)&haystack[i + j - 1]);
		else
			i++;
	}
	return (0);	
}
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if(!needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char dest[] = "aaaabcbad";
    char src[] = "b";
	char *pw;
	char dest1[] = "aaaabcbad";
    char src1[] = "b";

    pw = ft_strnstr(dest, src, 2);
	printf("%s\n", pw);
	//printf("%s\n", strnstr(dest1, src1, 2));
    return (0);
}
*/
// segmentation fault when returning NULL or 0 (if I return needle when not found program okay)
