/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:25:51 by kisikaya          #+#    #+#             */
/*   Updated: 2021/12/02 22:08:30 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*cpy;
	const size_t	len = ft_strlen(s);

	cpy = (char *)malloc(sizeof(char ) * (ft_strlen(s) + 1));
	if (!cpy)
		return (NULL);
	while (*s)
		*cpy++ = *s++;
	*cpy = '\0';
	return (cpy - len);
}
