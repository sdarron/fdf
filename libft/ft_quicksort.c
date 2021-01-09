/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 03:48:06 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/29 04:07:45 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_quicksort(int arr[], int beg, int end)
{
	int	i;
	int	j;
	int	y;
	int	sup;

	i = beg;
	j = end;
	sup = arr[(beg + end) / 2];
	while (i <= j)
	{
		while (arr[i] < sup)
			i++;
		while (arr[j] > sup)
			j--;
		if (i <= j)
		{
			y = arr[i];
			arr[i++] = arr[j];
			arr[j--] = y;
		}
	}
	if (beg < j)
		ft_quicksort(arr, beg, j);
	if (end > i)
		ft_quicksort(arr, i, end);
}
