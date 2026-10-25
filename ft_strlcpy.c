/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 09:08:03 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/10/25 10:26:37 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lonsrc;

	lonsrc = ft_strlen(src);
	if (size == 0)
		return (lonsrc);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (lonsrc);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "abcd";
	char dst[3];

	printf("%zu\n", ft_strlcpy(dst, str, 3));
	printf("%s\n", dst);
	return (0);
	
}*/
