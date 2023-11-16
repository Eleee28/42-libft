/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:57:43 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/21 09:58:15 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** @file ft_striteri.c
 * 	@brief Apply functions to strings
 * 
 * 	This function applies a given function to a string.
*/

/* -- Includes -- */
#include "libft.h"

/** @brief applies a given function to a string
 * 
 * 	@param s string
 *	@param f pointer to a function
 * 	@return Void
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
