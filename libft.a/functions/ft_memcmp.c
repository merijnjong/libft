/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:01 by mjong             #+#    #+#             */
/*   Updated: 2023/10/10 17:36:34 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while ((((unsigned char *)s1)[i] != '\0'
// 		|| ((unsigned char *)s2)[i] != '\0') && i < n)
// 	{
// 		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
// 		{
// 			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char *s1 = "Hello";
// 	const char *s2 = "";
// 	size_t n = 2;

// 	int result1 = ft_memcmp(s1, s2, n);
// 	int result2 = ft_memcmp(s1, s2, n);

// 	printf("%i\n", result1);
// 	printf("%i", result2);
//	return (0);
// }
