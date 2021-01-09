/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 23:46:59 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/15 11:45:59 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *des, const char *app, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (des[i] != '\0')
		i++;
	while ((app[j] != '\0') && (j < n))
	{
		des[i + j] = app[j];
		j++;
	}
	des[i + j] = '\0';
	return (des);
}
