/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 21:50:43 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/10/25 02:59:00 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (n == 0)
		return (dest);
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	int	s[]= {1, 2, 4, 5};
	int *st = &s[2];
	int *dt = &s[0];
	int	i;
	ft_memmove(dt, st, 8);
	i = 0;
	while (i < 4)
	{
		printf("%d", s[i]);
		i++;
	}
	return (0);
}*/
