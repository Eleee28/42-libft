/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:35 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 12:49:16 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
char	*ft_strstr(char *str, char *to_find)
{
	char	*aux_str;
	char	*aux_to_find;

	if (*to_find == '\0')
		return (str);
	aux_to_find = to_find;
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			aux_str = str;
			while ((*str != '\0') && (*to_find != '\0') && (*str == *to_find))
			{
				to_find++;
				str++;
			}
			if (*to_find == '\0')
				return (aux_str);
			to_find = aux_to_find;
			str = aux_str + 1;
		}
		else
			str++;
	}
	return (0);
}
*/

#include <string.h>

int main(void)
{
	char dest[] = "abc";
    char src[] = "b";
	char *pw;
	char dest1[] = "abc";
    char src1[] = "b";


    pw = ft_strnstr(dest, src, 2);
	printf("%s\n", pw);
	printf("%s\n", strnstr(dest1, src1, 2));
    return (0);
}
