/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:47:08 by momascle          #+#    #+#             */
/*   Updated: 2023/04/09 19:05:30 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((unsigned char) c == '\0')
		return ((char *) s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			return ((char *) s + i);
		s++;
	}
	return (NULL);
}
