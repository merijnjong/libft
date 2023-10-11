/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:06 by mjong             #+#    #+#             */
/*   Updated: 2023/10/10 17:36:41 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t			i;
// 	unsigned char	temp;

// 	i = 0;
// 	while (((unsigned char *)src)[i] != '\0' && i < n)
// 	{
// 		temp = ((unsigned char *)src)[i];
// 		((unsigned char *)dest)[i] = temp;
// 		i++;
// 	}
// 	return ((void *)dest);
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		temp;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (s[i] != '\0' && i < n)
	{
		temp = s[i];
		d[i] = temp;
		i++;
	}
	return ((void *)d);
}

// int	main(void)
// {
//     char	source[] = "Hello, World!";
//     char	destination[20] = "World!";

//     size_t n = 20;
//     char	*result1 = ft_memmove(destination, source, n);
// 	char	*result2 = memmove(destination, source, n);

// 	printf("%s\n", result1);
// 	printf("%s", result2);
//	return (0);
// }
