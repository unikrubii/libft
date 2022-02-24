/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:56:01 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/24 19:42:59 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *nd, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*nd))
		return ((char *)hs);
	while (hs[i] && i < len)
	{
		j = 0;
		if (hs[i] == nd[j])
		{
			while (hs[i + j] == nd[j] && hs[i + j] && nd[j] && (i + j) < len)
				j++;
			if (!(nd[j]))
				return ((char *)hs + i);
		}
		i++;
	}
	return (0);
}
