/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:01:31 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/10/26 14:58:57 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;

	if (nmemb == 0 || size == 0)
	{
		p = malloc(1);
		return ((void *)p);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return ((void *)p);
}
