/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:03:01 by clau              #+#    #+#             */
/*   Updated: 2021/09/21 22:12:53 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*copystr;

	copystr = (unsigned char *) str;
	while (n > 0 && *copystr)
	{
		if ((unsigned char) c == *copystr)
			return (copystr);
		n--;
		copystr++;
	}
	if (c == 0 && *copystr == 0)
		return (copystr);
	return (NULL);
}
