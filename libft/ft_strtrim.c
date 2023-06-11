/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 06:08:00 by momascle          #+#    #+#             */
/*   Updated: 2023/06/11 06:50:45 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isinset(const char *set, char c)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		start;
	int		end;
	char	*trimmed;

	if (!s1)
		return (ft_calloc(1, sizeof(char *)));
	i = 0;
	while (isinset(set, s1[i]))
		i++;
	start = i;
	end = ft_strlen(s1);
	if (end < 0)
		return (ft_strdup(""));
	while (s1[end - 1] && isinset(set, s1[end - 1]))
		end--;
	trimmed = ft_substr(s1, start, end - start);
	return (trimmed);
}
