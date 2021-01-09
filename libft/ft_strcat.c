/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:28:21 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:28:02 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *des, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (des[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		des[i] = src[j];
		i++;
		j++;
	}
	des[i] = '\0';
	return (des);
}
