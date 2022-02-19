/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:27:22 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/20 01:27:22 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (len == 0 || (start + 1 > ft_strlen(s)))
	{
		ptr = (char *)malloc(1);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}

#include <stdio.h>
int	main(void)
{
	char	*s;

	s = ft_substr("tripouille", 1, 1);
	printf("%s", s);
	// free (s);
}