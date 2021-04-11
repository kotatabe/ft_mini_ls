/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 20:27:22 by marvin            #+#    #+#             */
/*   Updated: 2020/07/02 22:32:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*list;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(list = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&list, del);
		return (NULL);
	}
	tmp = list;
	while (lst->next)
	{
		if (!(tmp->next = ft_lstnew(f(lst->next->content))))
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (list);
}
