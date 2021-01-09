/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:15:55 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/23 22:57:47 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *des, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dc;
	unsigned char	*sr;

	if (src == des)
		return (des);
	dc = (unsigned char *)des;
	sr = (unsigned char *)src;
	i = 0;
	if (sr < dc)
	{
		i = n;
		while (i-- > 0)
			dc[i] = sr[i];
	}
	else
	{
		while (i < n)
		{
			dc[i] = sr[i];
			i++;
		}
	}
	return (des);
}
