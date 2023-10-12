/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elena <elena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:28 by ejuarros          #+#    #+#             */
/*   Updated: 2023/10/12 17:31:35 by elena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
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