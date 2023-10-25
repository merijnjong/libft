/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:14:46 by mjong             #+#    #+#             */
/*   Updated: 2023/10/25 13:34:15 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	memsize;
	void	*ptr;

	memsize = nmemb * size;
	ptr = malloc(memsize);
	if (ptr != NULL)
		ft_memset(ptr, 0, memsize);
	return (ptr);
}
