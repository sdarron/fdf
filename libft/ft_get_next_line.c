/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 18:59:19 by sdarron           #+#    #+#             */
/*   Updated: 2020/01/31 13:35:24 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				lineoutput(char **fd_arr, char **line, int count)
{
	int			i;
	char		*str;

	i = 0;
	if (count < 0)
		return (-1);
	while ((*fd_arr)[i] != '\n' && (*fd_arr)[i] != '\0')
		i++;
	if ((*fd_arr)[i] == '\n')
	{
		*line = ft_strsub(*fd_arr, 0, i);
		str = ft_strdup(&((*fd_arr)[i + 1]));
		free(*fd_arr);
		*fd_arr = str;
		if ((*fd_arr)[0] == '\0')
			ft_strdel(fd_arr);
	}
	else
	{
		*line = ft_strdup(*fd_arr);
		ft_strdel(fd_arr);
	}
	return (1);
}

int				ft_get_next_line(const int fd, char **line)
{
	int			count;
	static char	*fd_arr[FD_SIZE];
	char		buf[BUFF_SIZE + 1];
	char		*str;

	if (fd < 0 || fd > FD_SIZE || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	while ((count = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[count] = '\0';
		if (!(fd_arr[fd]))
			fd_arr[fd] = ft_strdup(buf);
		else
		{
			str = ft_strjoin(fd_arr[fd], buf);
			free(fd_arr[fd]);
			fd_arr[fd] = str;
		}
		if (ft_strchr(fd_arr[fd], '\n'))
			break ;
	}
	if (fd_arr[fd] == NULL && count == 0)
		return (0);
	else
		return (lineoutput(&fd_arr[fd], &*line, count));
}
