/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:05:37 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/10/24 19:46:45 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	original[] = "ABCD";
	char	test[sizeof(original)];
	char	reference[sizeof(original)];
	size_t	cases[] = {0, 1, 3, 5};
	size_t	i;
	size_t	j;

	i = 0;
	while (i < sizeof(cases) / sizeof(cases[0]))
	{
		memcpy(test, original, sizeof(original));
		memcpy(reference, original, sizeof(original));

		ft_bzero(test, cases[i]);
		bzero(reference, cases[i]);

		printf("n = %zu : %s\n", cases[i],
			memcmp(test, reference, sizeof(test)) == 0
			? "OK" : "ERREUR");

		j = 0;
		while (j < sizeof(test))
		{
			printf("%u ", (unsigned char)test[j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}*/
