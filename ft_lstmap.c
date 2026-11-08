/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 20:04:25 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/11/08 20:25:04 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*current;
	void	*d;
	t_list	*tmp;

	result = NULL;
	if (lst != NULL && f != NULL && del != NULL)
	{
		current = lst;
		while (current != NULL)
		{
			d = f(current->content);
			tmp = ft_lstnew(d);
			if (tmp == NULL)
			{
				del(d);
				ft_lstclear(&result, del);
				return (NULL);
			}
			ft_lstadd_back(&result, tmp);
			current = current->next;
		}
	}
	return (result);
}
