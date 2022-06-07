/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:48:48 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/18 22:15:58 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if ((unsigned char)c == '\0')
		return ((char *)s + i + 1);
	while (i >= 0)
	{
		if (*(s + i) == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return ((char *) NULL);
}
