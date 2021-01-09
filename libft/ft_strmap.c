/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 15:54:33 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:29:22 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*a;

	if (s && f)
	{
		a = (char *)s;
		i = 0;
		while (a[i] != '\0')
			i++;
		a = (char *)malloc(sizeof(*a) * (i + 1));
		if (a == NULL)
			return (NULL);
		else
		{
			i = 0;
			while (s[i] != '\0')
			{
				a[i] = f(s[i]);
				i++;
			}
			a[i] = '\0';
		}
		return (a);
	}
	return (NULL);
}
