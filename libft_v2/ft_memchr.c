/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:56:06 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 11:18:18 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = s;
	i = 0;
	while (*(str + i) != (char)c && i < n)
	{
		if (!*(str + i))
			return (0);
		else
			i++;
	}
	return ((void *)str + i);
}
/*
# include <string.h>

int	main(void)
{
	char	*ptr;
	char	str[] = "Holal\0a";
	char	*ptr1;

	ptr1 = memchr(str, 'l', 4);
	printf("%s\n", ptr1);
	ptr = ft_memchr(str, 'l', 4);
	printf("%s\n", ptr);
	return (0);
}
*/