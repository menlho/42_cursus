/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 21:55:47 by momascle          #+#    #+#             */
/*   Updated: 2023/04/09 22:07:37 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*buff;

	buff = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (buff[i] == (unsigned char) c)
			return (buff + i);
		i++;
	}
	return (NULL);
}
