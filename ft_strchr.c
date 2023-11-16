/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:58:58 by ejuarros          #+#    #+#             */
/*   Updated: 2023/11/16 12:00:22 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** @file ft_strchr.c
 * 	@brief Libc strchr function
 * 
 * 	This function locates the first occurrence of a character in the string.
*/

/* -- Includes -- */
#include "libft.h"

/** @brief locates the first occurrence of a character in the string
 * 
 * 	The terminating null character is considered to be part of the string.
 * 
 * 	@param str string to be converted
 * 	@return integer number
*/

char	*ft_strchr(const char *str, int c)
{
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
