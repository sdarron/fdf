/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 10:17:21 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:30:07 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*a;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	len = 0;
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i > len)
		len = i;
	a = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!a)
		return (NULL);
	while (i < len)
		a[j++] = s[i++];
	a[j] = '\0';
	return (a);
}
