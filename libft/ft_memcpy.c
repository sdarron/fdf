/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:12:33 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/23 22:37:21 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memcpy(void *des, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ds;
	const unsigned char	*sc;

	ds = (unsigned char*)des;
	sc = (unsigned char*)src;
	i = 0;
	if (ds == sc)
		return (NULL);
	while (i < n)
	{
		ds[i] = sc[i];
		i++;
	}
	return (des);
}
