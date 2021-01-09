/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:32:44 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/23 22:59:24 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *arr, int c, size_t n)
{
	size_t			i;
	unsigned char	*arr1;

	arr1 = (unsigned char*)arr;
	i = 0;
	while (i < n)
	{
		if (arr1[i] == (unsigned char)c)
			return ((void*)(arr1 + i));
		i++;
	}
	return (NULL);
}
