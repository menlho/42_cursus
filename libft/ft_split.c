/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:07:56 by momascle          #+#    #+#             */
/*   Updated: 2023/06/11 06:48:26 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sep_count(const char *s, char c)
{
	int	res;

	res = 0;
	while (*s)
	{
		if (*s != c)
		{
			res++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (res);
}

static char	**ft_free_split(char **str)
{
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**ft_splitfill(char **str, const char *s, char c)
{
	const char	*start;
	int			i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			str[i] = ft_substr(start, 0, s - start);
			if (!str[i])
				return (ft_free_split(str));
			i++;
		}
		else
			s++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	int			words;

	if (!s)
		return (NULL);
	words = sep_count(s, c);
	str = ft_calloc(words + 1, sizeof(char *));
	if (!str)
		return (NULL);
	str = ft_splitfill(str, s, c);
	return (str);
}
