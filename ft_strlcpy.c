/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:17 by mjong             #+#    #+#             */
/*   Updated: 2023/10/24 15:58:34 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size < 0 || dst == NULL)
		return (0);
	if (size == 0)
		return (src_len);
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (src_len);
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
