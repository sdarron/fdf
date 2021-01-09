/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 09:04:03 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:29:08 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		len;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		a = (char*)malloc(sizeof(char) * (len + 1));
		if (!a)
			return (NULL);
		while (s1[++i])
			a[i] = s1[i];
		while (s2[j])
		{
			a[i] = s2[j];
			i++;
			j++;
		}
		a[i] = '\0';
		return (a);
	}
	return (NULL);
}
