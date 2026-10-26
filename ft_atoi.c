/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 13:25:08 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/10/26 14:00:01 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*nptr == 32) || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr)
	{
		if (*nptr >= '0' && *nptr <= '9')
			result = (result * 10) + (*nptr - '0');
		else
			break ;
		nptr++;
	}
	return (result * sign);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int res = ft_atoi(argv[1]);
		printf("%d\n", res);
	}
	return (0);
}*/
