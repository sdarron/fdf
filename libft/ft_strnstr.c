/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 00:04:15 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/19 19:59:04 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t i;
	size_t j;
	size_t a;

	i = 0;
	if (str2[0] == '\0')
		return ((char *)str1);
	while (str1[i] != '\0' && len > i)
	{
		j = 0;
		if (str1[i] == str2[j])
		{
			a = i;
			while (str1[i] == str2[j] && len > i)
			{
				if (str2[j + 1] == '\0')
					return ((char *)&str1[a]);
				j++;
				i++;
			}
			i = a;
		}
		i++;
	}
	return (0);
}
