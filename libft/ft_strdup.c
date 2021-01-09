/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:59:49 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:28:53 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	int		i;
	char	*a;

	i = 0;
	while (src[i] != '\0')
		i++;
	a = (char *)malloc(sizeof(*a) * (i + 1));
	if (a == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (src[i] != '\0')
		{
			a[i] = src[i];
			i++;
		}
		a[i] = '\0';
	}
	return (a);
}
