/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 20:43:58 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/10/26 15:01:49 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*occ;
	unsigned char		ch;
	size_t				i;

	occ = (const unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (occ[i] == ch)
			return ((void *)&occ[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	unsigned char s[] = "ABCD";

	char unsigned *v = (unsigned char *)ft_memchr(s, 'C', 4);

	if(v != NULL)
	{
		printf("%s\n", v);
	}
	return (0);
}*/
