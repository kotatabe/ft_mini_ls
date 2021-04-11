/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 15:36:26 by marvin            #+#    #+#             */
/*   Updated: 2020/07/07 19:59:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		size;
	t_list	*list;

	if (!lst)
		return (NULL);
	size = ft_lstsize(lst);
	list = lst;
	while (size - 1 > 0)
	{
		list = list->next;
		size--;
	}
	return (list);
}
