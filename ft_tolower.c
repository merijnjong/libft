/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:29 by mjong             #+#    #+#             */
/*   Updated: 2023/10/23 15:30:50 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	while (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

// int	main(void)
// {
// 	int result1 = ft_tolower('3');
// 	int result2 = tolower('3');

// 	printf("%i\n", result1);
// 	printf("%i", result2);
//	return (0);
// }
