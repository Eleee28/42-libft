/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:28 by ejuarros          #+#    #+#             */
/*   Updated: 2023/11/17 09:43:47 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** @file ft_strlen.c
 * 	@brief Libc strlen function
 * 
 * 	This function computes the length of a string.
*/

/* -- Includes -- */
#include "libft.h"

/** @brief computes the length of a string
 * 
 * 	@param s string
 * 	@return length of s
*/

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
