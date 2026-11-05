/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:01:20 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/11/04 16:33:29 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	while (i > 0)
	{
		i--;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (i + 1);
	}
	return (i);
}

static size_t	get_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*sstr;

	start = get_start(s1, set);
	end = get_end(s1, set);
	len = end - start;
	sstr = malloc((len + 1) * sizeof(char));
	if (!sstr)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		len--;
		sstr[i] = s1[start];
		i++;
		start++;
	}
	sstr[i] = '\0';
	return (sstr);
}

/*#include <stdio.h>

int	main(void)
{
	char s[] = "abchelabcloabc";
	char set[] = "abc";
	printf("%s\n", ft_strtrim(s, set));
	return (0);
}*/
