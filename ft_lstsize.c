/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 16:00:54 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/11/08 16:16:37 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*p;
	unsigned int	count;

	p = lst;
	count = 0;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}
