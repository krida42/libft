/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:53:17 by kisikaya          #+#    #+#             */
/*   Updated: 2021/11/29 23:16:47 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ss1 = (const unsigned char *)s1;
	const unsigned char	*ss2 = (const unsigned char *)s2;

	if (!n)
		return (0);
	i = 0;
	while (ss1[i] == ss2[i] && i < n - 1)
		i++;
	return (ss1[i] - ss2[i]);
}
