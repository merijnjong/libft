/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:14 by mjong             #+#    #+#             */
/*   Updated: 2023/10/12 17:37:51 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	j = 0;
	dst_len = 0;
	while (dst[dst_len] != '\0')
	{
		dst_len++;
	}
	while (src[i] != '\0' && i < size + dst_len)
	{
		i++;
	}
	while (dst[j] != '\0' && (i + j < size + dst_len))
	{
		j++;
	}
	dst[j] = '\0';
	return (i + j);
}

// int	main(void)
// {
// 	char dst[] = "hellooooo";
// 	const char src[] = "meeee";
// 	size_t n = 15;

// 	size_t num1 = ft_strlcat(dst, src, n);
// 	size_t num2 = strlcat(dst, src, n);

// 	printf("%zu\n", num1);
// 	printf("%zu", num2);
//	return (0);
// }
