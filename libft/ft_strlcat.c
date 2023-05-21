/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:43:51 by momascle          #+#    #+#             */
/*   Updated: 2023/04/12 00:37:18 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*buff;

	if (!dst && !dstsize)
		return (0);
	i = 0;
	buff = dst;
	while (*buff++ && (i < dstsize))
		i++;
	if (i == dstsize)
		return (i + ft_strlen(src));
	return (i + ft_strlcpy(dst + i, src, dstsize - i));
}
