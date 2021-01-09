/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:14:14 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:27:52 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *memptr, int val, size_t num)
{
	size_t	i;
	char	*str;

	str = (char *)memptr;
	i = 0;
	while (i < num)
	{
		str[i] = (char)val;
		i++;
	}
	return (memptr);
}
