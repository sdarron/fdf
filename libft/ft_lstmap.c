/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 01:04:41 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/29 03:45:35 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	list = f(lst);
	if (list == NULL)
		return (NULL);
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = f(lst)))
			return (NULL);
		new = new->next;
	}
	return (list);
}
