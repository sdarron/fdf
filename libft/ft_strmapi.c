/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:32:21 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:29:27 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*a;

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
			while (s[i])
			{
				a[i] = f(i, s[i]);
				i++;
			}
			a[i] = '\0';
		}
		return (a);
	}
	return (NULL);
}
