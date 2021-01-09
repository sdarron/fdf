/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 19:56:44 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:27:14 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbrlen(int n)
{
	int			c;

	c = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char			*ft_itoa(int n)
{
	char		*a;
	int			rneg;
	int			i;
	int			len;

	len = 0;
	i = 0;
	rneg = 0;
	if (n < 0)
		rneg = 1;
	len = ft_nbrlen(n);
	if (!(a = ft_strnew(len + rneg)))
		return (NULL);
	if (rneg == 1)
		a[0] = '-';
	i = len + rneg - 1;
	while (i >= rneg)
	{
		if (rneg == 1)
			a[i--] = (n % 10 * -1) + '0';
		if (rneg == 0)
			a[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (a);
}
