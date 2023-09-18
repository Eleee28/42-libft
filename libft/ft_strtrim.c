/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 07:48:28 by codespace         #+#    #+#             */
/*   Updated: 2023/09/18 09:23:43 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     i;
    
    i = 0;
    while (set[i])
    {
        str = ft_strchr(s1, set[i]);
        while (str)
        {
            
            
        }
    }
}