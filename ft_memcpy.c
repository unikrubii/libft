/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:48:27 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/17 15:48:27 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t  i;

    if (dest == src || !n)
        return (dst);
    i = 0;
    while (i < n)
    {
        *((char *)dst + i) = *((char *)src + i);
        i++;
    }
    return (dst);
}