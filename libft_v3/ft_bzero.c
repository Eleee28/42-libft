/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:54:26 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:21:47 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int main()
{
	char str[] = "Hello World!";
	printf("Original string: %s\n", str);
	ft_bzero(str, 7);
	printf("Modified string: %s\n", str);
	return (0);
}
*/