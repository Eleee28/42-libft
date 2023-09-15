/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:56:21 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 19:02:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*aux_src;
	char		*aux_dest;

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
