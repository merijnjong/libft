/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:14 by mjong             #+#    #+#             */
/*   Updated: 2023/10/24 15:48:52 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	j = dst_len;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0')
	{
		if (i == size - dst_len - 1)
			break ;
		dst[j] = src[i];
		i++;
		j++;
	}
	if (size > dst_len)
		dst[j] = '\0';
	return (dst_len + src_len);
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
