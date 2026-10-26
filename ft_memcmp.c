/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:45:35 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/10/26 12:04:25 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && ss1[i] == ss2[i])
		i++;
	if (i == n)
		return (0);
	return (ss1[i] - ss2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	int s1[] = {1, 2 , 3, 4};
	int s2[] = {1, 1, 3, 4};

	printf("%d\n", ft_memcmp(s1, s2, 16));
	return (0);
}*/
