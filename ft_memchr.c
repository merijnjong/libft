/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:10:58 by mjong             #+#    #+#             */
/*   Updated: 2023/10/23 15:29:54 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (((unsigned char *)s)[i] != '\0' && i < n)
// 	{
// 		if (((unsigned char *)s)[i] == (unsigned char)c)
// 			return ((void *)((unsigned char *)s + i));
// 		i++;
// 	}
// 	return (NULL);
// }

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*src;
	unsigned char		ch;

	i = 0;
	src = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (src[i] != '\0' && i < n)
	{
		if (src[i] == ch)
			return ((void *)src + i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const void *s = "0123456789";
// 	int c = '5';
// 	size_t n = 6;

// 	const char *result1 = (const char *)ft_memchr(s, c, n);
// 	const char *result2 = (const char *)memchr(s, c, n);

// 	printf("%s\n", result1);
// 	printf("%s", result2);
//	return (0);
// }
