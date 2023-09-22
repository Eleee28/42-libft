/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:56:21 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/22 11:21:09 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*aux_src;
	unsigned char		*aux_dest;

	if (!src && !dest)
		return (0);
	aux_dest = dest;
	aux_src = src;
	while (n--)
		*aux_dest++ = *aux_src++;
	return (dest);
}
/*
int main(void)
{
	char src[] = "Hello World!", dest[] = "Hola Mundo!", *ptr;
	printf("Src: %s\n", src);
	printf("Original dest: %s\n", dest);
	ptr = (char *)ft_memcpy(dest, src, 7);
	printf("Modified dest: %s\n", ptr);
	return (0);
}
*/
