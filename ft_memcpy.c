/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:01:01 by clau              #+#    #+#             */
/*   Updated: 2021/09/21 16:02:05 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*copydst;

	copydst = dst;
	while (n > 0 && *((unsigned char*) src))
	{
		*copydst = *((unsigned char *) src);
		src++;
		copydst++;
		n--;
	}
	return (copydst);
}
