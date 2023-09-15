/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:07 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:27:46 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_total_len(const char *src, const char *dest, size_t size)
{
	size_t	src_len;
	size_t	dest_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	return (dest_len + src_len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	total_len;

	total_len = ft_total_len(src, dest, size);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (i < size)
	{
		while (src[j] && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (total_len);
}
/*
int	main(void)
{
	char s1[] = "Hello A", s2[] = "World!";
	printf("%ld\n", ft_strlcat(s1, s2, 11));
	printf("%s\n", s1);
	return (0);
}

// Error stack smashing detected terminated, Aborted (core dumped)
*/