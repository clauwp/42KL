/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:13:28 by clau              #+#    #+#             */
/*   Updated: 2021/09/07 16:17:31 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str);

char	*ft_strnstr(char *haystack, char *needle, int len)
{
	int	i;
	int	j;

	i = 0;
	if (*needle = 0 | ft_strlen(haystack) < ft_strlen(needle))
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[j + i] == needle[j])
		{
			if (needle[j + 1] == 0)
				return (haystack[j]);
			j++;
		}
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
