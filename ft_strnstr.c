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
    size_t  i;
    size_t  j;

    if (needle[0] == '\0')
        return ((char *)haystack);
    if (haystack[0] == '\0' || len == 0)
        return (NULL);
    i = 0;
    j = 0;
    while (haystack)
    {
        if (needle[j] == '\0')
            return ((char *)(haystack + i + j));
        if (haystack[i] == needle[j])
            j++;
        else
        {
            i -= j;
            j = 0;
        }
        if (i >= len && haystack[i] != '\0')
            return (NULL);
        i++;
    }
}