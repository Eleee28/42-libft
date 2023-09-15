/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:58:58 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 11:21:30 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str++ != (char)c)
	//{
		if (!*str)
			return (0);
		//else
			//str++;
	//}
	return ((char *)str - 1);
}
/*
#include <string.h>

int main()
{
	char *ptr, str[] = "Holaa";

	ptr = ft_strchr(str, 'o');
	printf("%s\n", ptr);
	return (0);
}
*/