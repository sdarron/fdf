/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:33:59 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:29:36 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*a;
	size_t	i;

	i = 0;
	if (size > size + 1)
		return (NULL);
	a = (char*)malloc(size + 1);
	if (!a)
		return (NULL);
	while (i < size)
	{
		a[i] = '\0';
		i++;
	}
	a[i] = '\0';
	return (a);
}
