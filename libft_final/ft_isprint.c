/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:55:49 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 09:55:50 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	int	ret_value;

	if (c >= 32 && c <= 126)
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("Original: %d\n", isprint('~'));	
	printf("Mine: %d\n", ft_isprint('~'));

	return (0);
}
*/
