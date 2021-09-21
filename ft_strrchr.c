/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:57:03 by clau              #+#    #+#             */
/*   Updated: 2021/09/21 15:57:05 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
returns a pointer to the last occurrence of the character c in the string s.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	count;

	count = 0;
	if (c == 0)
		return ((char *) &str[ft_strlen(str)]);
	while (str[count])
		count++;
	while (count >= 1)
	{
		if (str[count - 1] == c)
			return ((char *) &str[count - 1]);
		count--;
	}
	return (0);
}
