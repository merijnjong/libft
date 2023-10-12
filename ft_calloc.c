/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:14:46 by mjong             #+#    #+#             */
/*   Updated: 2023/10/12 14:11:22 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include "libft.h"

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*str;
// 	unsigned char	ch;

// 	i = 0;
// 	str = (unsigned char *)s;
// 	ch = (unsigned char)c;
// 	while (i < n)
// 	{
// 		str[i] = ch;
// 		i++;
// 	}
// 	return (str);
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	memsize;
	void	*ptr;

	memsize = nmemb * size;
	ptr = malloc(memsize);
	if (nmemb == 0 || size == 0)
		return (0);
	if (ptr != 0)
		ft_memset(ptr, 0, memsize);
	return (ptr);
}

// int	main(void)
// {
// 	size_t	nmemb = 5;
// 	size_t	size = 4;

// 	int *memsize1 = ft_calloc(nmemb, size);
// 	int *memsize2 = calloc(nmemb, size);

// 	if (memsize1 != 0 && memsize2 != 0)
// 	{
// 		printf("ft_calloc: %d\n", *memsize1);
// 		printf("calloc: %d\n", *memsize2);
// 	}
// 	else
// 		printf("Memory allocation failed.\n");
// }
