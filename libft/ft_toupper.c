/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:45 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:29:52 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{	
	if ((c >= 'a' && c <= 'z'))
		c -= 32;
	return (c);
}

/*
#include <ctype.h>

int main()
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", toupper('a'));
	return (0);
}
*/