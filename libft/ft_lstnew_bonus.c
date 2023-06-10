/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:24:01 by momascle          #+#    #+#             */
/*   Updated: 2023/06/10 19:37:39 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *buff;

	buff = malloc(sizeof(t_list));
	if (!buff)
		return (NULL);
	buff->content = content;
	buff->next = NULL;
	return (buff);
}
