/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:04:19 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/29 03:19:32 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_arrmin(int arr[], int beg, int end)
{
	int	rez;

	rez = arr[beg];
	while (beg <= end)
	{
		if (arr[beg] < rez)
			rez = arr[beg];
		beg++;
	}
	return (rez);
}
