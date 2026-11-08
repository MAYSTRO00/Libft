/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:09:35 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/11/08 21:10:57 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static char	transform(unsigned int i, char c)
{
	char	*sstr;
	size_t	len;
	size_t	i;
	size_t	len;
	size_t	i;

	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*sstr;

	len = ft_strlen(s);
	sstr = malloc((len + 1) * sizeof(char));
	if (!sstr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sstr[i] = f(i, s[i]);
		i++;
	}
	sstr[i] = 0;
	return (sstr);
}

/*#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_strmapi("hello", transform);
	if (!result)
		return (1);
	printf("Résultat : %s\n", result);
	free(result);
	return (0);
}*/
