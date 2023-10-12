/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elena <elena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:58:58 by ejuarros          #+#    #+#             */
/*   Updated: 2023/10/12 17:27:10 by elena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (0);
	while (*str != (char)c)
	{
		if (!*str)
			return (0);
		else
			str++;
	}
	return ((char *)str);
}
/*
#include <string.h>

int main()
{
	char *ptr, str[] = "Holaa";

	ptr = ft_strchr(str, 'o');
	printf("%s\n", ptr);
	return (0);
}
*/