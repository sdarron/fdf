/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:38:48 by sdarron           #+#    #+#             */
/*   Updated: 2020/02/04 00:52:33 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			countword(char const *str, char c)
{
	int		word;
	int		i;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i])
			word++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (word);
}

int			height(char *file)
{
	char	*line;
	int		fd;
	int		height;

	fd = open(file, O_RDONLY, 0);
	height = 0;
	while (ft_get_next_line(fd, &line))
	{
		height++;
		ft_memdel((void**)&line);
	}
	close(fd);
	ft_memdel((void**)&line);
	return (height);
}

int			width(char *file)
{
	int		width;
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY, 0);
	width = 0;
	ft_get_next_line(fd, &line);
	width = countword(line, ' ');
	ft_memdel((void**)&line);
	close(fd);
	return (width);
}

void		getmap(float *zcoo, char *line)
{
	char	**numb;
	int		j;

	numb = ft_strsplit(line, ' ');
	j = 0;
	while (numb[j])
	{
		zcoo[j] = (float)ft_atoi(numb[j]);
		free(numb[j]);
		numb[j] = NULL;
		j++;
	}
	free(numb);
	numb = NULL;
}

void		readmap(char *file, t_note *all)
{
	int		fd;
	char	*line;
	int		i;

	all->heig = height(file);
	all->wth = width(file);
	if (!(all->zcoo = (float **)ft_memalloc(sizeof(float*) * (all->heig + 1))))
		return ;
	i = 0;
	while (i <= all->heig)
	{
		if (!(all->zcoo[i] = (float *)malloc(sizeof(float) * (all->wth + 1))))
			freeheight(all, i);
		i++;
	}
	if (!((fd = open(file, O_RDONLY, 0)) >= 0))
		ft_putstr("Reding error\n");
	i = 0;
	while (ft_get_next_line(fd, &line))
	{
		getmap(all->zcoo[i++], line);
		ft_memdel((void**)&line);
	}
	ft_memdel((void**)&line);
	close(fd);
}
