/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stregu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 21:27:27 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/23 18:50:11 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;
	int	j;

	if (!s1 || !s2)
		return (0);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}
