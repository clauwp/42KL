/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:57:03 by clau              #+#    #+#             */
/*   Updated: 2021/09/23 14:31:08 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
returns a pointer to the last occurrence of the character c in the string s.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	if (c == 0)
		return ((char *) &str[len]);
	len = len - 1;
	while (len >= 0)
	{
		if (str[len] == c)
			return ((char *) &str[len]);
		len--;
	}
	return (NULL);
}
