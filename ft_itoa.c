/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:31:39 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/21 09:38:32 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	digits;
	int	aux;

	digits = 0;
	aux = n;
	if (n == 0)
		digits++;
	while (aux != 0)
	{
		digits++;
		aux /= 10;
	}
	if (n < 0)
		digits++;
	return (digits);
}

static int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	len = count_digits(n);
	str = malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	if (n == 0)
		str[0] = '0';
	str[len] = 0;
	len--;
	while (len >= i)
	{
		str[len] = (char){(ft_abs(n % 10)) + '0'};
		n /= 10;
		len--;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
    printf("%s\n", ft_itoa(2147483647));
    return (0);
}
*/
