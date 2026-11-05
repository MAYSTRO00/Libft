/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:55:18 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/11/05 19:55:58 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char w, char c)
{
	return (w == c);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] && check_sep(s[i], c))
		i++;
	while (s[i])
	{
		while (s[i] && check_sep(s[i], c) == 0)
			i++;
		count++;
		while (s[i] && check_sep(s[i], c))
			i++;
	}
	return (count);
}

static char	*make_word(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*word;

	len = 0;
	while (s[len] && check_sep(s[len], c) == 0)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free(char **s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**sstr;
	size_t	len;
	size_t	i;

	len = count_words(s, c) + 1;
	sstr = malloc(len * sizeof(char *));
	if (!sstr)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s && check_sep(*s, c))
			s++;
		if (*s)
		{
			sstr[i] = make_word(s, c);
			if (!sstr[i])
				return (ft_free(sstr, i), NULL);
			i++;
		}
		while (*s && check_sep(*s, c) == 0)
			s++;
	}
	sstr[i] = NULL;
	return (sstr);
}

/*#include <stdio.h>

int	main(void)
{
	char s[] = ",,hello,,world,,its,42,";
	char sep = ',';
	size_t i;

	char **sstr = ft_split(s, sep);
	i = 0;
	while(i < 4)
	{
		printf("%s\n", sstr[i]);
		i++;
	}
	return (0);
}*/
