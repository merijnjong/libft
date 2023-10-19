/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:14 by mjong             #+#    #+#             */
/*   Updated: 2023/10/19 17:34:59 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;

	str = n;
	if (!str)
		return (NULL);
	return (str);
}

int	main(void)
{
	char *result = ft_itoa(10400);

	printf("%s", result);
	return (0);
}