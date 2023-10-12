/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:10:02 by mjong             #+#    #+#             */
/*   Updated: 2023/10/12 18:24:16 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	result;
	int	sign;

	i = 0;
	num = 0;
	result = 0;
	sign = 1;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+' || nptr[i] >= 9 && nptr[i] <= 13 || nptr[i] == 32)
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = nptr[i] - '0';
		result = (result * 10) + num;
		i++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	const char nptr[20] = "-2	1 4-74 83647";

// 	int result1 = ft_atoi(nptr);
// 	int result2 = atoi(nptr);

// 	printf("%i\n", result1);
// 	printf("%i", result2);
// 	return (0);
// }
