/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:30:27 by sdarron           #+#    #+#             */
/*   Updated: 2020/02/03 21:42:54 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include "minilibx_macos/mlx.h"

typedef struct	s_note
{
	int			wth;
	int			heig;
	float		**zcoo;
	int			mapsize;
	int			color;
	int			colorgor;
	int			crawlx;
	int			crawly;
	int			elevation;
	double		angle;
	int			izom;
	void		*mlx_ptr;
	void		*win_ptr;
}				t_note;

void			readmap(char *file, t_note *all);
int				height(char *file);
int				width(char *file);
void			getmap(float *z_line, char *line);
int				countword(char const *str, char c);
void			bresenham(float *point, float x1, float y1, t_note *all);
void			draw(t_note *all);
float			max(float a, float b);
float			mod(float i);
void			isom(float *x, float *y, int z, t_note *angle);
int				deal_key(int key, t_note *all);
void			ft_deal_key(int key, t_note *all);
void			presskey1(t_note *all);
void			presskey(t_note *all);
void			init_constants(t_note *all);
void			color(int z, int z1, t_note *all);
int				zetcoor(float x, float y, t_note *all);
void			pixel(float group[], float x1, float y1, t_note *all);
void			bresenham(float *point, float x1, float y1, t_note *all);
void			draw(t_note *all);
void			min_mapsize (t_note *all);
void			freeheight(t_note *all, int i);

#endif
