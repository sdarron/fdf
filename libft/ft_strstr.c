/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 22:11:48 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:29:55 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	if (str2[0] == '\0')
		return ((char *)str1);
	while (str1[i] != '\0')
	{
		j = 0;
		if (str1[i] == str2[j])
		{
			a = i;
			while (str1[i] == str2[j])
			{
				if (str2[j + 1] == '\0')
					return ((char *)&str1[a]);
				i++;
				j++;
			}
			i = a;
		}
		i++;
	}
	return (NULL);
}
