/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:53:05 by clau              #+#    #+#             */
/*   Updated: 2021/09/21 15:55:59 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	int	count;

	count = 0;
	while (src[count])
		count++;
	if (dst != NULL && src != NULL && dst_size != NULL)
	{
		while (dst_size > 1 && *src)
		{
			*dst = *src;
			dst++;
			src++;
			dst_size--;
		}
		*dst = 0;
	}
	return (count);
}
