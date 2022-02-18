/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:56:01 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/18 15:56:01 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  nlen;

    if ((int)len < 0)
        return (0);
    nlen = ft_strlen(needle);
    if (!needle || needle == haystack)
        return ((char *)haystack);
    while (haystack && nlen < len)
    {
        if (*haystack == *needle && ft_strncmp(haystack, needle, nlen) == 0)
            return ((char *)haystack);
        haystack++;
    }
    return (0);
}