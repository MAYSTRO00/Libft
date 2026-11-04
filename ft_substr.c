/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:00:53 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/11/04 12:24:27 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(size_t rest, size_t len)
{
	if (len >= rest)
		return (rest);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	size;
	size_t	rest;
	size_t	n;

	size = ft_strlen(s);
	if (start >= size)
	{
		sstr = malloc(1);
		if (!sstr)
			return (NULL);
		sstr[0] = '\0';
		return (sstr);
	}
	rest = size - start;
	n = get_len(rest, len) + 1;
	sstr = malloc((n) * sizeof(char));
	if (!sstr)
		return (NULL);
	ft_strlcpy(sstr, &s[start], n);
	return (sstr);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s;

	s = ft_substr("Bonjour", 3, 4);
	printf("Test 1 : [%s]\n", s);
	free(s);

	s = ft_substr("Bonjour", 15, 4);
	printf("Test 2 : [%s]\n", s);
	free(s);

	s = ft_substr("Bonjour", 3, 2);
	printf("Test 3 : [%s]\n", s);
	free(s);
	return (0);
}*/
