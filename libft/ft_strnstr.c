/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:13:48 by momascle          #+#    #+#             */
/*   Updated: 2023/06/11 06:31:27 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	if (!(needle[i2]))
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] && (i < len) && (needle[i2]
			|| (haystack[i] == needle[i2])))
	{
		if (haystack[i] == needle[i2])
		{
			while (needle[i2] && (needle[i2] == haystack[i + i2])
				&& ((i + i2) < len))
				i2++;
			if (needle[i2] == '\0')
				return ((char *)&haystack[i]);
			i2 = 0;
		}
		i++;
	}
	return (NULL);
}
