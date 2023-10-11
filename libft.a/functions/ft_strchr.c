/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:11 by mjong             #+#    #+#             */
/*   Updated: 2023/10/10 17:36:49 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
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
