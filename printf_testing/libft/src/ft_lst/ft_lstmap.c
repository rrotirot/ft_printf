/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrotirot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:41:56 by rrotirot          #+#    #+#             */
/*   Updated: 2022/10/13 14:42:49 by rrotirot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst1;
	t_list	*new;

	lst1 = 0;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new == 0)
			ft_lstclear(&lst1, del);
		ft_lstadd_back(&lst1, new);
		lst = lst->next;
	}
	return (lst1);
}