/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:57:28 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:26:34 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*aux;

	aux = s;
	while (n > 0)
	{
		*aux = (unsigned char)c;
		aux++;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>

int     main(void)
{
		char    str[] = "Hello World!";
		printf("Original string: %s\n", str);
		ft_memset(str, 'a', 7);
		printf("Modified string: %s\n", str);
		return (0);
}
*/
