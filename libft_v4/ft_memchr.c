/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:56:06 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/22 11:39:51 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

/*
 *		//if (!*(str + i))
			//return (0);
		//else
	*/

/*
# include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*ptr;
	char	str[] = "bonjourno";
	char	*ptr1;

	ptr1 = memchr(str, 'n', 2);
	printf("%s\n", ptr1);
	ptr = ft_memchr(str, 'n', 2);
	printf("%s\n", ptr);
	return (0);
}
*/
