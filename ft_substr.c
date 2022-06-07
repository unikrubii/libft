/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:27:22 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/23 15:14:48 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (len == 0 || (start + 1 > ft_strlen(s)))
	{
		ptr = (char *)malloc(sizeof(char) * 1);
		*ptr = '\0';
		return (ptr);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (s[start] && i < len)
			ptr[i++] = s[start++];
	}
	ptr[i] = '\0';
	return (ptr);
}
