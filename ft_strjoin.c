/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:33:29 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/11/04 12:57:34 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(char const *s1, char const *s2, char *sstr)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		sstr[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		sstr[j] = s2[i];
		i++;
		j++;
	}
	sstr[j] = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_total;
	char	*sstr;

	len_total = ft_strlen(s1) + ft_strlen(s2) + 1;
	sstr = malloc(len_total * sizeof(char));
	if (!sstr)
		return (NULL);
	ft_strcpy(s1, s2, sstr);
	return (sstr);
}

/*#include <stdio.h>

int	main(void){
	char s1[] = "hello";
	char s2[] = " 42";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
