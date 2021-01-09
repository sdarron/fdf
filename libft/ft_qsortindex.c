/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsortindex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 22:31:28 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/29 04:17:18 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_qsortindex(int *arr, int *ind, int beg, int end)
{
	int	i;
	int	j;
	int	y;
	int	sup;

	i = beg;
	j = end;
	sup = arr[ind[(beg + end) / 2]];
	while (i <= j)
	{
		while (arr[ind[i]] < sup)
			i++;
		while (arr[ind[j]] > sup)
			j--;
		if (i <= j)
		{
			y = ind[i];
			ind[i++] = ind[j];
			ind[j--] = y;
		}
	}
	if (beg < j)
		ft_qsortindex(arr, ind, beg, j);
	if (end > i)
		ft_qsortindex(arr, ind, i, end);
}
