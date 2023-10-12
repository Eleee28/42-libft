/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:10:34 by codespace         #+#    #+#             */
/*   Updated: 2023/10/05 11:30:55 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
#include <stdio.h>

int main(void)
{
	char *ptr1 = ft_calloc(6, sizeof(int));
	char *ptr2 = calloc(6, sizeof(int));

	for (int i = 0; i < 6; i++)
		printf("%d ", ptr1[i]);
	printf("\n");
	for (int i = 0; i < 6; i++)
		printf("%d ", ptr2[i]);
	return (0);
}
*/
