/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:03:28 by momascle          #+#    #+#             */
/*   Updated: 2023/04/07 21:05:12 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char*) dst;
	s = (unsigned char*) src;
	if (s < d)
	{
		while (len--)
			(*(d + len)) = (*(s + len));
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}
