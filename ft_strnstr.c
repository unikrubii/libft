/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:56:01 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/18 22:20:31 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *nd, size_t len)
{
	size_t	nlen;
	size_t	i;

	// if ((int)len < 0)
	// 	return (0);
	nlen = ft_strlen(nd);
	if (!nd || nd == hs)
		return ((char *)hs);
	while (*hs && nlen < len)
	{
		if (*hs == *nd && ft_strncmp(hs, nd, nlen) == 0)
			return ((char *)hs);
		hs++;
	}
	return (0);
}
