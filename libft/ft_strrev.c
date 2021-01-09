/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaisey <tdaisey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 19:06:02 by sdarron           #+#    #+#             */
/*   Updated: 2020/01/19 10:28:35 by tdaisey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *s)
{
	int		i;
	int		len;
	char	t;

	i = 0;
	len = 0;
	if (s)
	{
		len = ft_strlen(s);
		--len;
		while (i < len)
		{
			t = s[i];
			s[i] = s[len];
			s[len] = t;
			i++;
			len--;
		}
		return (s);
	}
	return (NULL);
}
