/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:55:22 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:23:44 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	ret_value;

	if (((c) & ~0x7f) == 0)
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}
/*
#include <ctype.h>

int	main(void)
{
	//printf("Original: %d\n", __isascii('"'));
	printf("Mine: %d\n", ft_isascii('"'));
	
	return (0);
}
*/