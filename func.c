/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 04:34:51 by sdarron           #+#    #+#             */
/*   Updated: 2020/02/03 21:42:50 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

float	max(float a, float b)
{
	return (a > b) ? a : b;
}

float	mod(float i)
{
	return (i < 0) ? -i : i;
}

void	isom(float *x, float *y, int z, t_note *all)
{
	if (all->izom == 1)
	{
		*x = (*x - *y) * cos(all->angle);
		*y = ((*x + *y) * sin(all->angle)) - z;
	}
}

void	init_constants(t_note *all)
{
	all->angle = 0.523599;
	all->crawlx = 800;
	all->crawly = 400;
	all->elevation = 20;
	all->izom = 0;
	all->colorgor = 0;
	all->mapsize = 45;
}

void	min_mapsize(t_note *all)
{
	int	mapsize;
	int	mapsize1;

	mapsize1 = 45;
	mapsize = 45;
	if (all->mapsize * all->wth > 1000)
		mapsize = 1000 / all->wth;
	if (all->mapsize * all->heig > 500)
		mapsize1 = 500 / all->heig;
	if (mapsize <= mapsize1)
		all->mapsize = mapsize;
	if (mapsize > mapsize1)
		all->mapsize = mapsize1;
}
