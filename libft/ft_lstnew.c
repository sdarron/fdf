/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 01:50:07 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/29 03:49:36 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list) * content_size);
	if (new == NULL)
		return (NULL);
	else if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = malloc(content_size);
		if (new->content == NULL)
			return (NULL);
		new->content_size = content_size;
		ft_memcpy(new->content, content, content_size);
	}
	new->next = NULL;
	return (new);
}
