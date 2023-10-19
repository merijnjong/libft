/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:31:05 by mjong             #+#    #+#             */
/*   Updated: 2023/10/19 15:53:17 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_stringcounter(char const *s, char c)
{
	int	strings;
	int	sign;

	strings = 0;
	sign = 0;
	while (*s != '\0')
	{
		if (*s != c && sign == 0)
		{
			strings++;
			sign = 1;
		}
		if (*s == c)
		{
			sign = 0;
		}
		s++;
	}
	return (strings);
}

static int	ft_length(const char *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		strings;
	int		i;
	int		j;

	strings = ft_stringcounter(s, c);
	str = malloc((strings + 1) * sizeof(char *));
	i = 0;
	j = 0;
	if (!str || !s)
		return (str);
	while (i < strings)
	{
		while (s[j] == c)
		{
			j++;
		}
		str[i] = ft_substr(s, j, ft_length(s, c, j));
		if (str[i] == NULL)
			free(str[i]);
		j += ft_length(s, c, j);
		i++;
	}
	str[i] = NULL;
	return (str);
}

// int	main(void)
// {
// 	char	input_string[] = "Hello,world,how,are,you,,";
// 	char	delimiter = ',';

// 	char **result = ft_split(input_string, delimiter);

// 	if (result)
// 	{
// 		int	i;

// 		i = 0;
// 		while (result[i] != NULL)
// 		{
// 			printf("Substring %d: %s\n", i, result[i]);
// 			i++;
// 		}
// 		i = 0;
// 		while (result[i] != NULL) {
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed or input string is NULL.\n");
// 	}

// 	return (0);
// }
