/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:59:02 by clau              #+#    #+#             */
/*   Updated: 2021/09/21 16:13:06 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Iterates the list ’lst’ and applies the function ’f’
to the content of each element. Creates a new
list resulting of the successive applications of the function ’f’.
The ’del’ function is used to
delete the content of an element if needed.
Return: The new list. NULL if the allocation fails
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*retlist;
	t_list	*copy_list;

	retlist = (t_list *)malloc(sizeof(t_list) * ft_lstsize(lst));
	if (retlist != NULL)
	{
		copy_list = retlist;
		while (lst)
		{
			retlist = ft_lstnew(f(lst->content));
			if (retlist->content != NULL)
				retlist->next = lst->next;
			else
				ft_lstclear(&copy_list, del);
			lst = lst->next;
		}
		return (copy_list);
	}
	else
		return (NULL);
}
