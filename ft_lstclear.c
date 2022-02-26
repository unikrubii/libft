/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 08:04:07 by sthitiku          #+#    #+#             */
/*   Updated: 2022/02/26 08:53:55 by sthitiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;

	if (lst && del)
	{
		while (*lst)
		{
			head = (*lst)->next;
			del((*lst)->content);
			free((*lst));
			*lst = head;
		}
	}
	*lst = NULL;
}
