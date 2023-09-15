/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:39 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 18:32:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char 	*ptr;
	char	*aux;

	aux = ft_strchr(s, c);
	while (aux)
	{
		ptr = aux;
		aux++;
		aux = ft_strchr(aux, c);
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