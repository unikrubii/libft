/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:50:36 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/23 15:15:26 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	first_i(char *s1, char *set)
{
	size_t	i;

	i = 0;
	while (ft_strrchr(set, s1[i]) && s1[i])
		i++;
	if (i == ft_strlen(s1))
		i = 0;
	return (i);
}

size_t	last_i(char *s1, char *set)
{
	size_t	i;

	i = ft_strlen(s1);
	while (ft_strrchr(set, s1[i]) && i)
		i--;
	return (i);
}

char	*ft_strtrim(char *s1, char *set)
{
	size_t	first;
	size_t	last;
	size_t	i;
	size_t	size;
	char	*res;

	first = first_i(s1, set);
	last = last_i(s1, set);
	size = last - first + 1;
	i = 0;
	if (size == 1 && first + last < size)
	{
		res = (char *)malloc(sizeof(char));
		if (!res)
			return (NULL);
	}
	else
	{
		res = (char *)malloc(sizeof(char) * (size + 1));
		while (i < size)
			res[i++] = s1[first++];
	}
	res[i] = '\0';
	return (res);
}
