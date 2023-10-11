/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:24 by mjong             #+#    #+#             */
/*   Updated: 2023/10/10 17:37:14 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] == little[j] && little[j] != '\0' && (i + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char big[] = "needle in aaah haystack";
// 	const char little[] = "aah";
// 	size_t len = 14;

// 	char *result0 = ft_strnstr(big, little, len);
// 	// char *result1 = strnstr(big, little, len);
// 	printf("%s\n", result0);
// 	// printf("%s", result1);
//	return (0);
// }
