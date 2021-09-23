/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:56:52 by clau              #+#    #+#             */
/*   Updated: 2021/09/23 15:26:06 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns
a copy of ’s1’ with the characters specified
in "set" removed from the beginning and the end of the string.
Parameter:
1. string to trim
2. reference set of characters to trim
*/

#include "libft.h"
#include <stdlib.h>

static int	ft_totrim(const char *str, char c);

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*retstr;
	char	*start;
	char	*end;
	int		i;

	i = 0;
	retstr = (char *)malloc(sizeof(char) * ft_strlen(s1));
	while (ft_totrim(set, *s1) != 0)
		s1++;
	start = (char *) s1;
	while (*s1 != 0)
		s1++;
	while ((ft_totrim(set, *s1) != 0 && s1 != start) || *s1 == 0)
		s1--;
	end = (char *) s1;
	if (retstr != NULL)
	{
		i = 0;
		while (start <= end)
			retstr[i++] = *start++;
		retstr[i] = 0;
		return (retstr);
	}
	else
		return (NULL);
}

static int	ft_totrim(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
