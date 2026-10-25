/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:04:55 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/10/25 20:08:16 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	*occ;
	unsigned char		ch;
	const unsigned char	*p;

	occ = (const unsigned char *)s;
	ch = (unsigned char)c;
	p = NULL;
	while (*occ)
	{
		if (*occ == ch)
			p = occ;
		occ++;
	}
	if (*occ == ch)
		p = occ;
	return ((char *)p);
}

/*#include <stdio.h>

int	main(void)
{
	char s[] = "abbbcd";
	char *v = ft_strrchr(s, 'b');

	if (v == NULL)
		printf("NULL");
	else
		printf("%s\n", v);
	return (0);
}*/
