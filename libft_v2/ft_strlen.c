/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:28 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:28:17 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	printf("Original: %d\n", strlen("Hello World!"));
	printf("Mine: %d\n", ft_strlen("Hello World!"));
}
*/