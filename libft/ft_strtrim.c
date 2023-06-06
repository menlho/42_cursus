/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 06:08:00 by momascle          #+#    #+#             */
/*   Updated: 2023/06/06 07:19:37 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static unsigned int isinset(const char *set, char c)
{

	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}
char	*ft_strtrim(const char *s1,const char *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;
	unsigned int	end;
	char	*trimmed;

	i = 0;
	while (isinset(set, s1[i]))
		i++;
	start = i;
	while (s1[i])
	{
		j = i;
		while (isinset(set, s1[j]))
		{
			if (s1[j] == '\0')
				end = j - i;
			j++;
		}
		if (s1[i + 1] == '\0')
			end = i;
		i++;
	}
	trimmed = (char *)malloc(sizeof(char) * ((end - start) + 1));
	ft_strlcpy(trimmed, s1 + start, (end - start) + 1);
	return (trimmed);
}

/*int main()
{
	printf(" %d abc a \n", isinset("abc", 'a'));
	printf(" %d abc d \n", isinset("abc", 'd'));
	char *s1 = "   bonjour    ";
	char *s2;
	s2 = ft_strtrim(s1, " ");
	printf("og: %s\n trimmed: %s\n", s1, s2);
}*/
