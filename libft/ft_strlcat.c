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
	unsigned int	lendest;
	unsigned int	lenstr;
	unsigned int	i;

	lendest = ft_strlen(dst);
	lenstr = ft_strlen(src);
	i = 0;
	if (!(dst) && !(src) && (dstsize == 0))
		return (0);
	if ((dstsize - 1 < lendest) || (dstsize == 0))
		return (lenstr + dstsize);
	while ((src[i]) && (lendest + i < dstsize - 1))
	{
		dst[lendest + i] = src[i];
		i++;
	}
	dst[lendest + i] = '\0';
	return (lendest + ft_strlen(src));
}
