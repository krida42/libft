/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:37:45 by kisikaya          #+#    #+#             */
/*   Updated: 2021/12/01 17:47:34 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	cc = (const char)c;

	while (*s && *s != cc)
		s++;
	if (*s == cc)
		return ((char *)s);
	return (NULL);
}
