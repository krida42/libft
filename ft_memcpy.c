/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:46:08 by kisikaya          #+#    #+#             */
/*   Updated: 2021/12/07 20:21:12 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_tmp;
	unsigned char	*src_tmp;

	if (!dest && !src)
		return (NULL);
	dest_tmp = (unsigned char *)dest;
	src_tmp = (unsigned char *) src;
	while (n-- > 0)
		*dest_tmp++ = *src_tmp++;
	return (dest);
}
