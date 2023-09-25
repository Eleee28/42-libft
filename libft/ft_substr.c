/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 06:31:28 by codespace         #+#    #+#             */
/*   Updated: 2023/09/25 11:03:23 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}

/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (0);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		str[i] = 0;
		return (str);
	}
	while (len > 0 && s[start])
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = 0;
	return (str);
}
*/

/*
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
*/
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