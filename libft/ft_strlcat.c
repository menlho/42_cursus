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

/*#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	lendest;
	unsigned int	lenstr;
	unsigned int	i;

	lendest = ft_strlen(dst);
	lenstr = ft_strlen(src);
	i = 0;
	if (dst == NULL)
		return (ft_strlen(src));
	if (!(dst) && !(src) && (dstsize == 0))
		return (0);
	if ((dstsize - 1 < lendest) || (dstsize == 0))
		return (lenstr + dstsize);
	while (((unsigned char) src[i]) && (lendest + i < dstsize - 1))
	{
		dst[lendest + i] = (unsigned char) src[i];
		i++;
	}
	dst[lendest + i] = '\0';
	return ((unsigned int)(lendest + ft_strlen(src)));
}
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*d;

	if (!dst && !dstsize)
		return (0);
	i = 0;
	d = dst;
	while (*d++ && i < dstsize)
		i++;
	if (i == dstsize)
		return (i + ft_strlen(src));
	return (i + ft_strlcpy(dst + i, src, dstsize - i));
}
