/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:05:14 by mjong             #+#    #+#             */
/*   Updated: 2023/10/23 15:29:40 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	num1 = ft_isdigit('a');
// 	int	num2 = isdigit('a');

// 	printf("%i\n", num1);
// 	printf("%i", num2);
//	return (0);
// }
