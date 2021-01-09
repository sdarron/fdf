/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:40:24 by sdarron           #+#    #+#             */
/*   Updated: 2020/02/03 21:45:32 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		presskey(t_note *all)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "Leave:   esc";
	str2 = "Map size:   - Q   + W";
	str3 = "Translation:   ->   <-";
	str4 = "Color change:   C   V";
	mlx_string_put(all->mlx_ptr, all->win_ptr, 50, 50, 0xC0C0C0, str1);
	mlx_string_put(all->mlx_ptr, all->win_ptr, 50, 170, 0xC0C0C0, str2);
	mlx_string_put(all->mlx_ptr, all->win_ptr, 50, 200, 0xC0C0C0, str3);
	mlx_string_put(all->mlx_ptr, all->win_ptr, 50, 230, 0xC0C0C0, str4);
	presskey1(all);
}

void		presskey1(t_note *all)
{
	char	*str5;
	char	*str6;
	char	*str7;
	char	*str8;

	str5 = "Isometric projection:   I";
	str6 = "Isometric transformations:   O   P";
	str7 = "Parallel projection:   U";
	str8 = "Elevation gain:  - E  + R";
	mlx_string_put(all->mlx_ptr, all->win_ptr, 50, 80, 0xC0C0C0, str5);
	mlx_string_put(all->mlx_ptr, all->win_ptr, 50, 110, 0xC0C0C0, str6);
	mlx_string_put(all->mlx_ptr, all->win_ptr, 50, 140, 0xC0C0C0, str7);
	mlx_string_put(all->mlx_ptr, all->win_ptr, 50, 260, 0xC0C0C0, str8);
}

void		ft_deal_key(int key, t_note *all)
{
	if (key == 15)
		all->elevation += 5;
	if (key == 14 && all->elevation > 0)
		all->elevation -= 5;
	if (key == 35)
		all->angle += 0.05;
	if (key == 31)
		all->angle -= 0.05;
	if (key == 32)
		all->izom = 0;
	if (key == 34)
		all->izom = 1;
	if (key == 8)
		all->colorgor += 0x1f;
	if (key == 9)
		all->colorgor -= 0x1f;
}

int			deal_key(int key, t_note *all)
{
	if (key == 13)
		all->mapsize += 5;
	if (key == 12 && all->mapsize > 0)
		all->mapsize -= 5;
	if (all->mapsize <= 0)
		all->mapsize = 1;
	if (key == 126)
		all->crawly -= 10;
	if (key == 125)
		all->crawly += 10;
	if (key == 124)
		all->crawlx += 10;
	if (key == 123)
		all->crawlx -= 10;
	if (key == 53)
		exit(0);
	ft_deal_key(key, all);
	mlx_clear_window(all->mlx_ptr, all->win_ptr);
	presskey(all);
	presskey1(all);
	draw(all);
	return (0);
}

int			main(int argc, char **argv)
{
	t_note	*all;
	int		i;

	i = 0;
	if (argc != 2)
	{
		ft_putstr("Usage: ./fdf MAP_FILE\n");
		exit(0);
	}
	if (!(all = (t_note*)ft_memalloc(sizeof(t_note))))
		return (0);
	readmap(argv[1], all);
	init_constants(all);
	all->mlx_ptr = mlx_init();
	all->win_ptr = mlx_new_window(all->mlx_ptr, 2000, 1000, "FDF");
	presskey(all);
	min_mapsize(all);
	draw(all);
	mlx_key_hook(all->win_ptr, deal_key, all);
	mlx_loop(all->mlx_ptr);
	while (i <= all->heig)
		ft_memdel((void **)&all->zcoo[i++]);
	ft_memdel((void**)all->zcoo);
	ft_memdel((void**)&all);
	return (0);
}
