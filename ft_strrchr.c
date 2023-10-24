/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:11:26 by mjong             #+#    #+#             */
/*   Updated: 2023/10/24 16:21:00 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *) s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i--;
	}
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
