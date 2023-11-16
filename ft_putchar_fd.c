/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:11:30 by ejuarros          #+#    #+#             */
/*   Updated: 2023/11/16 11:34:06 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** @file ft_putchar_fd.c
 * 	@brief Working with file descriptors
 * 
 * 	This function sends a character to a file descriptor.
*/

/* -- Includes -- */
#include "libft.h"

/** @brief sends a character to a file descriptor
 * 
 * 	@param c character to send
 * 	@param fd file descriptor 
 * 	@return Void
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
