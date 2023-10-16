/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:19 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:28:01 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	size_src;
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	size_src = ft_strlen(src);
	return (size_src);
}
/*
#include <strings.h>

int	main(void)
{
	char str1[] = "Hello World!", str2[] = "abcdefg", str3[] = "Hello World!";
	printf("Original: %d\n", strlcpy(str3, str2, 5));
	printf("Original: %s\n", str3);
	printf("Mine: %ld\n", ft_strlcpy(str1, str2, 5));
	printf("Mine: %s\n", str1);
	return (0);
}
*/