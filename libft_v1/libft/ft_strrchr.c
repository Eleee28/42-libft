/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:39 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:29:32 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	*aux;

	ptr = 0;
	while (s[i])
	{
		aux = ft_strchr(s, c);
		if (aux != 0)
			ptr = aux;
		i++;
	}
	return (ptr);
}
/*
int main(void)
{
	char *ptr, str[] = "Holoaa";

	ptr = ft_strrchr(str, 'o');
	printf("%s\n", ptr);
	return (0);
}
*/

// Segmentation fault