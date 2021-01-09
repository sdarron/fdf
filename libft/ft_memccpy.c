/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:45:46 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:27:36 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *des, const void *src, int ch, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sc;
	unsigned char	cp;

	i = 0;
	cp = ch;
	ds = (unsigned char *)des;
	sc = (unsigned char *)src;
	while (i < n)
	{
		ds[i] = sc[i];
		if (sc[i] == cp)
			return ((void*)(ds + i + 1));
		i++;
	}
	return (NULL);
}
