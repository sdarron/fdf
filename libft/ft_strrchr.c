/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 21:19:30 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/23 23:06:48 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *str, int ch)
{
	char		*str1;

	str1 = (0);
	while (*str)
	{
		if (ch == *str)
			str1 = (char*)str;
		str++;
	}
	if (str1)
		return (str1);
	if (ch == '\0')
		return ((char*)str);
	return (0);
}
