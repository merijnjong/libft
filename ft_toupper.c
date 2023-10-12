/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:31 by mjong             #+#    #+#             */
/*   Updated: 2023/10/12 17:38:18 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	while (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

// int	main(void)
// {
// 	int result1 = ft_toupper('Z');
// 	int result2 = toupper('Z');

// 	printf("%i\n", result1);
// 	printf("%i", result2);
//	return (0);
// }
