/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:11 by mjong             #+#    #+#             */
/*   Updated: 2023/10/24 16:22:00 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char) c == '\0')
		return ((char *)s + i);
	return (NULL);
}

// int	main(void)
// {
// 	int c = 'e';
// 	char *s1 = ft_strchr("Hello", c);
// 	char *s2 = strchr("Hello", c);

// 	printf("%p\n", s1);
// 	printf("%p", s2);
//	return (0);
// }
