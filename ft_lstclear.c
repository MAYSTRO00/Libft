/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 19:19:06 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/11/08 20:29:03 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*tmp;

	if (lst != NULL && del != NULL)
	{
		p = *lst;
		while (p)
		{
			tmp = p->next;
			ft_lstdelone(p, del);
			p = tmp;
		}
		*lst = NULL;
	}
}
