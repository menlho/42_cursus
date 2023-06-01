/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:31:09 by momascle          #+#    #+#             */
/*   Updated: 2023/06/01 19:50:35 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	buff = ft_calloc(len + 1, sizeof(char));
	if (buff == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (buff);
	ft_strlcpy(buff, s + start, len + 1);
	return (buff);
}
