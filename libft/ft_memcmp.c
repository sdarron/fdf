/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:37:46 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:27:41 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t			i;
	unsigned char	*arr10;
	unsigned char	*arr20;

	if (n == 0)
		return (0);
	arr10 = (unsigned char *)arr1;
	arr20 = (unsigned char *)arr2;
	i = 0;
	while (n > i)
	{
		if (arr10[i] != arr20[i])
			return (arr10[i] - arr20[i]);
		i++;
	}
	return (0);
}
