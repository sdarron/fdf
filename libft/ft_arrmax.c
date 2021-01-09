/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:21:34 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/29 03:18:30 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_arrmax(int arr[], int beg, int end)
{
	int	rez;

	rez = arr[beg];
	while (beg <= end)
	{
		if (arr[beg] > rez)
			rez = arr[beg];
		beg++;
	}
	return (rez);
}
