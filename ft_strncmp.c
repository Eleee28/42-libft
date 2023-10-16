/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:32 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:28:29 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		ret_value;
	size_t	i;

	i = 0;
	ret_value = 0;
	while (s1[i] && s2[i] && ret_value == 0 && i < n)
	{
		ret_value = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (ret_value == 0 && i < n)
		ret_value = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (ret_value);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[] = "abcdef", str2[] = "abc\375xx";
	size_t size = 5;
	printf("%d\n", ft_strncmp(str1, str2, size));

	char str3[] = "abcdef", str4[] = "abc\375xx";
	size_t size2 = 5;
	printf("%d\n", strncmp(str3, str4, size2));
	return (0);
}
*/
