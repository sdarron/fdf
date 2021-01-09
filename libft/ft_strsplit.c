/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:40:06 by sdarron           #+#    #+#             */
/*   Updated: 2020/02/03 02:00:13 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			arr_free(char **arr, int i)
{
	while (i > 0)
	{
		ft_strdel(&arr[i - 1]);
		i--;
	}
	free(*arr);
	arr = NULL;
}

static int			count_word(char const *s, char c)
{
	int				word;
	int				wordtm;

	wordtm = 0;
	word = 0;
	while (*s != 0)
	{
		if (*s != c && wordtm == 0)
		{
			wordtm = 1;
			word++;
		}
		if (*s == c && wordtm == 1)
			wordtm = 0;
		s++;
	}
	return (word);
}

static int			len_word(char const *s, char c)
{
	int				len;

	len = 0;
	while (*s != 0 && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	int				i;
	char			**arr;
	int				word;

	arr = (0);
	i = 0;
	if (!s || !c)
		return (NULL);
	if (!(arr = (char **)malloc(sizeof(char*) * (count_word(s, c) + 1))))
		return (NULL);
	word = count_word(s, c);
	while (word-- > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		arr[i] = ft_strsub(s, 0, len_word(s, c));
		if (arr[i++] == NULL)
		{
			arr_free(arr, i);
			return (NULL);
		}
		s = s + len_word(s, c);
	}
	arr[i] = NULL;
	return (arr);
}
