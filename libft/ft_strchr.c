/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:47:18 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:28:19 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int sym)
{
	while (*str)
	{
		if (*str == sym)
			return ((char*)str);
		str++;
	}
	if (sym == '\0')
		return ((char*)str);
	return (0);
}
