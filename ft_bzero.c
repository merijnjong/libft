/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:10:06 by mjong             #+#    #+#             */
/*   Updated: 2023/10/23 15:29:24 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		*str = '\0';
		str++;
		i++;
	}
}

// int	main(void)
// {
// 	size_t n = 17;
// 	char s[] = "Hello world!";

// 	ft_bzero(s, n);
// 	bzero(s, n);

// 	printf("%s", s);
// 	return (0);
// }
