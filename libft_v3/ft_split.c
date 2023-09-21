/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:02:52 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/21 10:20:24 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	num_words(char const *s, char c)
{
	int	i;
	int	num_words;

	i = 0;
	num_words = 0;
	while (s[i])
	{
		if (s[i] == c)
			num_words++;
		i++;
	}
	num_words++;
	return (num_words);
}

static void	str_cpy(char const *s, char c, char **str)
{
	int	row;
	int	col;
	int	i;

	row = 0;
	i = 0;
	while (s[i])
	{
		col = 0;
		while (s[i] && s[i] != c)
		{
			str[row][col] = s[i];
			i++;
			col++;
		}
		str[row][col] = 0;
		i++;
		row++;
	}
}

/*
static void	free_mem(char **str)
{
	int	i;

	i = 0;
	while (str[i][0])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
*/

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;
	int		row;
	int		prev_i;

	str = malloc((num_words(s, c) + 1) * sizeof(char *));
	if (!s || !str)
		return (0);
	i = 0;
	row = 0;
	prev_i = 0;
	while (s[prev_i + i])
	{
		while (s[prev_i + i] && s[prev_i + i] != c)
			i++;
		str[row] = malloc(i + 1);
		row++;
		i++;
		prev_i += i;
		i = 0;
	}
	str[row] = malloc(1);
	str[row][0] = 0;
	str_cpy(s, c, str);
	return (str);
}

/*
    if ()
    {
      free_mem(str);
      return (0);
    }
    */
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
