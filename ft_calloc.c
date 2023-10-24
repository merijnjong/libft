/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:14:46 by mjong             #+#    #+#             */
/*   Updated: 2023/10/24 13:57:27 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	memsize;
	void	*ptr;

	memsize = nmemb * size;
	ptr = malloc(memsize);
	if (ptr != NULL)
		ft_memset(ptr, 0, memsize);
	return (ptr);
}

// int	main(void)
// {
// 	size_t	nmemb = 0;
// 	size_t	size = 0;

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
