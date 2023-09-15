/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:56:21 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:37:30 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*aux_src;
	char		*aux_dest;

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
