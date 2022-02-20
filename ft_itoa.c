/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:41:13 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/21 00:41:13 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	count_digit(int n)
{
	if (n >= 10)
		return (1 + count_digit(n / 10));
	return (1);
}

char	*ft_itoa(int n)
{
	int	digit;
	int	i;
	char	*result;

	digit = count_digit(n);
	if (n < 0)
		digit++;
	result = (char *)malloc(sizeof(char) * (digit + 1));
	if (!result)
		return (NULL);
	result[i--] = '\0';
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		result[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}