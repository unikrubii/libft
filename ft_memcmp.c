/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:55:51 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/17 20:55:51 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (*(unsigned char *)s1 + i != *(unsigned char *)s2 + i)
        {
            return (*((unsigned char *)s1 + i) - (*(unsigned char *)s2 + i));
        }
        i++;
    }
    return (0);
}