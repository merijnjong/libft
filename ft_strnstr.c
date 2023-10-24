/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:24 by mjong             #+#    #+#             */
/*   Updated: 2023/10/24 16:15:35 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && (i + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
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
