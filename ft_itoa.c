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

int	ten_power(int n)
{
	if (n > 1)
		return (10 * ten_power(n - 1));
	return (10);
}

char	*ft_itoa(int n)
{
	int	digit;
	int	ten;
	int	i;
	char	*result;

	digit = count_digit(n);
	result = (char *)malloc(sizeof(char) * (digit + 1));
	if (!result)
		return (NULL);
	ten = ten_power(digit) / 10;
	// printf("%d\n", ten);
	i = 0;
	while (i < digit)
	{
		result[i] = (n / ten) + '0';
		n %= ten;
		ten /= 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}