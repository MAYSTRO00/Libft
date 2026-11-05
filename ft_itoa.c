/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 20:07:15 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/11/05 21:19:12 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(long int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*sstr;
	long int	nb;
	size_t		len;

	len = get_size(n);
	nb = n;
	sstr = malloc((len + 1) * sizeof(char));
	if (!sstr)
		return (NULL);
	if (nb == 0)
		sstr[0] = '0';
	if (nb < 0)
	{
		sstr[0] = '-';
		nb = -nb;
	}
	sstr[len] = '\0';
	while (nb > 0)
	{
		len--;
		sstr[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (sstr);
}

/*#include <stdio.h>

int	main(void)
{
	int n = -462;

	printf("%s\n", ft_itoa(n));
	return (0);
}*/
