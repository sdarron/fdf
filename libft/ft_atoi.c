/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 23:08:07 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/29 03:24:27 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_long(const char *str, int n)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && ft_isdigit(str[i]))
		i++;
	if (i > 20 && n > 0)
		return (-1);
	if (i > 20 && n < 0)
		return (0);
	return (1);
}

int			ft_atoi(const char *str)
{
	int		res;
	int		i;
	int		n;

	res = 0;
	i = 0;
	n = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		n = -1;
		i++;
	}
	if (str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9')
		i++;
	if (check_long(str, n) != 1)
		return (check_long(str, n));
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	return (res * n);
}
