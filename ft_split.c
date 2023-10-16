/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:02:52 by ejuarros          #+#    #+#             */
/*   Updated: 2023/10/05 11:48:21 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	char	last;
	int		i;
	int		cnt;

	last = c;
	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (last == c && s[i] != c)
			cnt++;
		last = s[i];
		i++;
	}
	return (cnt);
}

static int	substr_len(char const *s, char c, int len)
{
	int	n;

	n = 0;
	while (s[len])
	{
		if (s[len] == c)
			return (n);
		len++;
		n++;
	}
	return (n);
}

static int	fill(const char *s, char *str, int pos, int len)
{
	int	j;

	j = 0;
	while (j < len)
	{
		str[j] = s[pos];
		j++;
		pos++;
	}
	str[j] = 0;
	return (j);
}

static char	**free_mem(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	int				i;
	int				j;
	int				len_substr;

	str = (char **)malloc(sizeof(*str) * (count_words(s, c) + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		len_substr = substr_len(s, c, i);
		str[j] = (char *)malloc(sizeof(char) * (len_substr + 1));
		if (!str[j])
			return (free_mem(str, j));
		i += fill(s, str[j], i, len_substr);
		j++;
	}
	str[j] = 0;
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
    char s[] = "abdhabhj";
    char c = 'h';
    char **str;
    int   i, j;

    i = 0;
    j = 0;
    str = ft_split(s, c);
    while (str[i][j])
    {
      while (str[i][j])
      {
        printf("%c ", str[i][j]);
        j++;
      }
      j = 0;
      printf("\n");
      i++;
    }
    free_mem(str);
    
    return (0);
}
*/
