/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:58:58 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:27:24 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* CHECK!! */
char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!*str)
			return (0);
		else
			str++;
	}
	return ((char *)str);
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