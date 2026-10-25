/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:08:25 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/10/25 03:28:41 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>

int	main(void)
{
	char	s[];

	s[] = "ABBC";
	printf("%s\n", s);
	ft_memset(s, 'F', 3);
	printf("%s\n", s);
	return (0);
}*/
