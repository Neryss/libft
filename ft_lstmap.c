/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:45:33 by ckurt             #+#    #+#             */
<<<<<<< HEAD:ft_lstmap.c
/*   Updated: 2020/11/30 17:44:24 by ckurt            ###   ########lyon.fr   */
=======
/*   Updated: 2020/11/28 20:52:24 by ckurt            ###   ########lyon.fr   */
>>>>>>> 4f87a64ccbfd1daafb917b1a6b02de588837bbf1:ft_lstmap_bonus.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstmap_lstnew(void *content)
{
	t_list		*list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

static void		ft_lstmap_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*temp;

	if (*lst)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = temp;
		}
	}
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*res;
	t_list		*first;

	if (!lst || !(res = ft_lstmap_lstnew(lst->content)))
	{
		ft_lstmap_lstclear(&lst, del);
		return (NULL);
	}
	first = res;
	while (lst->next != NULL)
	{
		res->content = f(lst->content);
		lst = lst->next;
		if (!(res->next = ft_lstmap_lstnew(f(lst->content))))
		{
			ft_lstmap_lstclear(&first, del);
			return (NULL);
		}
		res = res->next;
	}
	return (first);
}