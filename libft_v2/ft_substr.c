/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 06:31:28 by codespace         #+#    #+#             */
/*   Updated: 2023/09/18 06:40:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	subs = malloc(len * sizeof(char));
	i = 0;
	while (i < len && s[start + i])
	{
		subs[i] = s[start + i];
		i++;
	}
	return (subs);
}
/*
// where do I return NULL?
*/

/*
#include <stdio.h>

int main(void)
{
	char    *str = ft_substr("Hello world!", 2, 10);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/