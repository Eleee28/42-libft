/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:55:37 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:13:20 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	ret_value;

	if (c >= '0' && c <= '9')
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}
/*
#include <ctype.h>

int	main(void)
{
	printf("Original: %d\n", isdigit('3'));	// isdigit returns 2048 if true, 0 else
	printf("Mine: %d\n", ft_isdigit('3'));
	
	return (0);
}
*/
