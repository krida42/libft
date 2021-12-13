/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:40:09 by kisikaya          #+#    #+#             */
/*   Updated: 2021/11/24 20:04:42 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ss;

	ss = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ss[i] = c;
		i++;
	}
	return (s);
}
