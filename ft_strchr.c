/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:57:46 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/10/25 16:03:55 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char		ch;
	const unsigned char	*occ;

	ch = (unsigned char)c;
	occ = (const unsigned char *)s;
	while (*occ)
	{
		if (*occ == ch)
			return ((char *)occ);
		occ++;
	}
	if (*occ == ch)
		return ((char *)occ);
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	const char s[] = "abbbb";
	char *v = ft_strchr(s, 0);
	if (v != NULL)
		printf("%s\n", v);
	else
		printf("NULL\n");
	return (0);
}*/
