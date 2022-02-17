/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:23:06 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/17 16:23:06 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memmove(void *dst, const void *src, size_t len)
{
    size_t  i;

    if (dst == src || !n)
        return (dst);
    i = 0;
    if (dst < src)
    {
        while (i < n)
        {
            *((char *)dst + i) = *((char *)src + i);
            i++;
        }
    }
    else
    {
        while (n > 0)
        {
            *((char *)dst + n - 1) = *((char *)src + n - 1);
            n--;
        }
    }
    return (dst);
}