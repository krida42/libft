/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 22:02:53 by kisikaya          #+#    #+#             */
/*   Updated: 2021/12/08 18:17:10 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del) (void *))
{
	t_list	*lstmapped;
	t_list	*cell;

	lstmapped = NULL;
	while (lst)
	{
		cell = ft_lstnew((*f)(lst->content));
		if (!cell)
		{
			ft_lstclear(&lstmapped, del);
			if (lstmapped)
				free(lstmapped);
			return (NULL);
		}
		ft_lstadd_back(&lstmapped, cell);
		lst = lst->next;
	}
	return (lstmapped);
}
