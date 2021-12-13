/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:23:55 by kisikaya          #+#    #+#             */
/*   Updated: 2021/12/03 02:11:44 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(const char c, const char *set)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	int	start;
	int	end;

	if (!s)
		return (NULL);
	start = -1;
	end = ft_strlen(s);
	while (++start < end && ft_isset(s[start], set))
		;
	while (--end > start && ft_isset(s[end], set))
		;
	return (ft_substr(s, start, end - start + 1));
}
