/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:31:05 by mjong             #+#    #+#             */
/*   Updated: 2023/10/18 17:28:25 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int	ft_wordcounter(char const *s, char c)
{
	int	spaces;

	spaces = 0;
	while (*s != '\0')
	{
		while (*s == c)
		{
			spaces++;
			s++;
		}
		s++;
	}
	if (*s == '\0')
		spaces++;
	return (spaces);
}

char	**ft_split(char const *s, char c)
{
	size_t	strings;
	char	**str;

	strings = ft_wordcounter(s, c);
	str = malloc(strings);
	return (str);
}

int	main(void)
{
	ft_split("Hello world how are you", ' ');
	return (0);
}
