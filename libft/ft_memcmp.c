/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:10:23 by momascle          #+#    #+#             */
/*   Updated: 2023/04/09 23:03:59 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*buff1;
	unsigned char	*buff2;

	buff1 = (unsigned char *) s1;
	buff2 = (unsigned char *) s2;
	i = 0;
	if (buff1 == NULL && buff2 == NULL)
		return (0);
	while (i < n)
	{
		if (buff1[i] != buff2[i])
			return ((unsigned char) buff1[i] - (unsigned char) buff2[i]);
		i++;
	}
	return (0);
}
