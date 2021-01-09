/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:52:00 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:27:31 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	if (size > size + 1)
		return (NULL);
	a = malloc(size);
	if (!a)
		return (NULL);
	while (i < size)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
