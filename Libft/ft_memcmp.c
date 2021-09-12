/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:39:04 by clau              #+#    #+#             */
/*   Updated: 2021/09/07 16:45:02 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*copy1;
	unsigned char	*copy2;

	copy1 = s1;
	copy2 = s2;
	while (n > 0)
	{
		if (*copy1 != *copy2)
			return ((int*) s1 - (int*) s2);
		n--;
	}
	return (0);
}
