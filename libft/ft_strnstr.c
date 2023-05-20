/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:13:48 by momascle          #+#    #+#             */
/*   Updated: 2023/04/11 19:01:52 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	b = 0;
	if (!(needle[a]))
		return ((char *) haystack);
	if (!(haystack) && (len == 0))
		return (0);
	while (haystack[a] != '\0' && a < len)
	{
		if (haystack[a] == needle[b])
		{
			c = a;
			while ((haystack[c] == needle[b]) && needle[b] && (c < len))
			{
				b++;
				c++;
			}
			if (needle [b] == '\0')
				return ((char *) haystack + a);
			b = 0;
		}
		a++;
	}
	return (0);
}
