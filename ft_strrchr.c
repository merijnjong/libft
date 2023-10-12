/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:26 by mjong             #+#    #+#             */
/*   Updated: 2023/10/12 17:38:12 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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
	return (0);
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
