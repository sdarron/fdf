/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   picture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 20:01:08 by sdarron           #+#    #+#             */
/*   Updated: 2020/02/03 21:44:22 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <math.h>

void		color(int z, int z1, t_note *all)
{
	if (z < 1 && z > -1)
		all->color = 0x8B4513 + all->colorgor;
	if (z1 > -1 || z1 < 1)
		all->color = 0x8B4513 + all->colorgor;
	if (z >= 1 || z1 >= 1)
		all->color = 0xFFFFFF + all->colorgor;
	if (z <= -1 || z1 <= -1)
		all->color = 0x008000 + all->colorgor;
}

int			zetcoor(float x, float y, t_note *all)
{
	int		z;

	z = all->zcoo[(int)y][(int)x];
	if (z > 0 && all->elevation > 0)
		z = z * all->elevation;
	if (z < 0 && all->elevation > 0)
		z = z * all->elevation;
	return (z);
}

void		pixel(float group[], float x1, float y1, t_note *all)
{
	float	stepx;
	float	stepy;
	float	x;
	float	y;

	x = group[0];
	y = group[1];
	stepx = (x1 - x) / max(mod(x1 - x), mod(y1 - y));
	stepy = (y1 - y) / max(mod(x1 - x), mod(y1 - y));
	while ((int)(x - x1) || (int)(y - y1))
	{
		mlx_pixel_put(all->mlx_ptr, all->win_ptr, x, y, all->color);
		x = x + stepx;
		y = y + stepy;
	}
}

void		bresenham(float *point, float x1, float y1, t_note *all)
{
	float	group[2];
	int		z;
	int		z1;
	float	x;
	float	y;

	x = point[0];
	y = point[1];
	z = zetcoor(x, y, all);
	z1 = zetcoor(x1, y1, all);
	color(zetcoor(x, y, all), zetcoor(x1, y1, all), all);
	x = x * all->mapsize;
	y = y * all->mapsize;
	x1 = x1 * all->mapsize;
	y1 = y1 * all->mapsize;
	isom(&x, &y, z, all);
	isom(&x1, &y1, z1, all);
	x += all->crawlx;
	y += all->crawly;
	x1 += all->crawlx;
	y1 += all->crawly;
	group[0] = x;
	group[1] = y;
	pixel(group, x1, y1, all);
}

void		draw(t_note *all)
{
	float	x;
	float	y;
	float	point[2];

	point[0] = 0;
	point[1] = 0;
	y = 0;
	while (y < all->heig)
	{
		x = 0;
		while (x < all->wth)
		{
			point[0] = x;
			point[1] = y;
			if (x + 1 < all->wth)
				bresenham(point, x + 1, y, all);
			if (y + 1 < all->heig)
				bresenham(point, x, y + 1, all);
			x++;
		}
		y++;
	}
}
