/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:26 by mjong             #+#    #+#             */
/*   Updated: 2023/10/23 15:30:41 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i] != c)
	{
		i--;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	int c = 'l';
// 	char *s1 = ft_strrchr("Hello", c);
// 	char *s2 = strrchr("Hello", c);

// 	printf("%p\n", s1);
// 	printf("%p", s2);
//	return (0);
// }
