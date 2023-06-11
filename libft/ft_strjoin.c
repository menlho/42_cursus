/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:51:59 by momascle          #+#    #+#             */
/*   Updated: 2023/06/11 06:18:14 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*buff;

	if (!s1)
		return (NULL);
	buff = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (buff)
	{
		ft_strlcpy(buff, s1, (ft_strlen(s1) + ft_strlen(s2) + 1));
		ft_strlcat(buff, s2, (ft_strlen(s1) + ft_strlen(s2) + 1));
	}
	return (buff);
}
