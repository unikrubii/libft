/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:01:11 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/19 21:01:11 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;

	slen = ft_strlen(src);
	if (slen + 1 < dstsize)
		ft_memcpy(dst, src, slen + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, slen - 1);
		dst[dstsize - 1] = '\0';
	}
	return (slen);
}
