/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:54:55 by kisikaya          #+#    #+#             */
/*   Updated: 2021/12/07 21:57:18 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(long int nb)
{
	int	len;

	len = 1;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = (long int) nb;
	len = ft_nbrlen(nbr);
	str = (char *) ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	while (--len >= 0 && !str[len])
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
