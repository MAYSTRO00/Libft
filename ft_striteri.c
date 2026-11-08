/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:10:35 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/11/06 15:22:23 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	transform(unsigned int i, char *c)
{
	size_t	i;

	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char	s[] = "hello";

	printf("Avant : %s\n", s);
	ft_striteri(s, transform);
	printf("Après : %s\n", s);
	return (0);
}*/
