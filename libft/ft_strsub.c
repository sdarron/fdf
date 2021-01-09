/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 18:48:04 by sdarron           #+#    #+#             */
/*   Updated: 2020/01/31 20:58:37 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	if (len > len + 1)
		return (NULL);
	if (s)
	{
		a = (char *)malloc(len + 1);
		if (start > ft_strlen(s))
			return (NULL);
		if (!a || !s)
			return (NULL);
		i = 0;
		while (len > i)
		{
			a[i] = s[start];
			start++;
			i++;
		}
		a[i] = '\0';
		return (a);
	}
	return (NULL);
}
