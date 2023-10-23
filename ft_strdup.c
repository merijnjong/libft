/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:15:01 by mjong             #+#    #+#             */
/*   Updated: 2023/10/23 15:30:17 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	totlen;
	char	*str;

	i = 0;
	totlen = ft_strlen(s);
	str = (char *)malloc(totlen);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char *result1 = ft_strdup("Hello world");
// 	char *result2 = strdup("Hello world");

// 	printf("%s\n", result1);
// 	printf("%s\n", result2);
// 	return (0);
// }
