/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:40:16 by kisikaya          #+#    #+#             */
/*   Updated: 2021/12/01 15:47:36 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	cc;

	cc = (char) c;
	len = ft_strlen(s);
	while (len > 0 && s[len] != cc)
		len--;
	if (s[len] == cc)
		return ((char *)s + len);
	return (NULL);
}
