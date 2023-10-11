/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:10:55 by mjong             #+#    #+#             */
/*   Updated: 2023/10/10 17:36:16 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	num1 = ft_isprint(-1);
// 	int	num2 = isprint(-1);

// 	printf("%i\n", num1);
// 	printf("%i\n", num2);
//	return (0);
// }
