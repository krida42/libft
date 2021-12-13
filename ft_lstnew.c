/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:59:16 by kisikaya          #+#    #+#             */
/*   Updated: 2021/12/07 21:59:32 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cell;

	cell = (t_list *) malloc(sizeof(*cell));
	if (!cell)
		return (NULL);
	cell->content = content;
	cell->next = NULL;
	return (cell);
}
