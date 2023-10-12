/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:52:07 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/27 08:38:13 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*aux1;
	void	*cont;

	if (!lst || !*f || !del)
		return (0);
	new = 0;
	while (lst)
	{
		cont = f(lst->content);
		aux1 = ft_lstnew(cont);
		if (!aux1)
		{
			del(cont);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, aux1);
		lst = lst->next;
	}
	return (new);
}
