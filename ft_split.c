/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:20:53 by kisikaya          #+#    #+#             */
/*   Updated: 2021/12/07 19:23:03 by kisikaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_rows(const char *s, char c)
{
	int	rows;

	rows = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
			rows++;
		while (*s && *s != c)
			s++;
	}
	return (rows);
}

static void	*mr_propre(char **str_arr)
{
	while (*str_arr)
		free(*str_arr++);
	free(str_arr);
	return (NULL);
}

static int	ft_wordlen(const char *s, char c)
{
	char	*str_end;

	str_end = ft_strchr(s, c);
	if (!str_end)
		return (ft_strlen(s));
	else
		return (str_end - s);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		n;
	char	**str_arr;

	if (!s)
		return (NULL);
	str_arr = malloc(sizeof(char *) * (ft_rows(s, c) + 1));
	if (!str_arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			n = ft_wordlen(s, c);
			str_arr[i++] = ft_substr(s, 0, n);
			if (!str_arr[i - 1])
				return (mr_propre(str_arr));
			s += n;
		}
	}
	str_arr[i] = NULL;
	return (str_arr);
}
