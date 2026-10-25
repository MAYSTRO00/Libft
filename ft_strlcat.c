/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 09:51:37 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/10/25 13:27:19 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	longsrc;
	size_t	longdst;
	size_t	j;
	size_t	rest;

	longsrc = ft_strlen(src);
	longdst = 0;
	while (longdst < size && dst[longdst])
		longdst++;
	if (longdst == size)
		return (size + longsrc);
	j = 0;
	rest = size - longdst - 1;
	while (j < rest && src[j])
	{
		dst[longdst + j] = src[j];
		j++;
	}
	dst[longdst + j] = 0;
	return (longdst + longsrc);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = " momo";
	char dst[100] = "hello" ;

	printf("%zu\n", ft_strlcat(dst, str, 0));
	printf("%s\n", dst);
	return (0);
	
}*/
