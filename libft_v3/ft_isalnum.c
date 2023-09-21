/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:54:46 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:10:32 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	ret_value;

	if (ft_isalpha(c) || ft_isdigit(c))
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}
/*
#include <ctype.h>

int	main(void)
{
	printf("Original: %d\n", isalnum('9'));
	printf("Mine: %d\n", ft_isalnum('9'));
	return (0);
}
*/