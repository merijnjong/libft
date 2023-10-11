/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:03 by mjong             #+#    #+#             */
/*   Updated: 2023/10/10 17:36:38 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	while (s[i] != '\0' && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)dest);
}

// int	main(void)
// {
// 	char source[] = "Copy this string to destination";
// 	char destination[50] = "Here";
// 	size_t n = 31;

// 	char *result1 = ft_memcpy(destination, source, n);
// 	char *result2 = memcpy(destination, source, n);

// 	printf("%s\n", result1);
// 	printf("%s", result2);
//	return (0);
// }
