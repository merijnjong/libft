/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:17 by mjong             #+#    #+#             */
/*   Updated: 2023/10/11 11:13:18 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[l] != '\0')
	{
		l++;
	}
	return (l);
}

// int	main(void)
// {
// 	char dst[20] = "hellomofos";
// 	const char src[] = "hello";
// 	size_t	n = 10;

// 	size_t num1 = ft_strlcpy(dst, src, n);
// 	// size_t num2 = strlcpy(dst, src, n);

// 	printf("%zu\n", num1);
// 	// printf("%zu", num2);
//	return (0);
// }
