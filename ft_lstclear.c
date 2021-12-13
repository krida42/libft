/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 22:01:52 by kisikaya          #+#    #+#             */
/*   Updated: 2021/12/07 22:01:53 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **alst, void (*del)(void *))
{
	t_list	*tmp;

	while (*alst)
	{
		tmp = *alst;
		*alst = (*alst)->next;
		ft_lstdelone(tmp, del);
	}
}
