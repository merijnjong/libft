/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:08 by mjong             #+#    #+#             */
/*   Updated: 2023/10/11 18:17:43 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		((unsigned char *)s)[i] = ((unsigned char)c);
// 		i++;
// 	}
// 	return (s);
// }

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (*str < n)
	{
		*str = ch;
		str++;
	}
	return (str);
}

int	main(void)
{
    char buffer[10] = "BBBBBBBBBB";

    char *result1 = ft_memset(buffer, 'A', 5);
	char *result2 = memset(buffer, 'A', 5);

	printf("%s\n", result1);
	printf("%s\n", result2);
	return (0);
}
