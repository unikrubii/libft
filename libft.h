/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:55:31 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/16 21:55:31 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *str);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    ft_zero(void *s, size_t n);
size_t  ft_strlen(const char *s);

#endif