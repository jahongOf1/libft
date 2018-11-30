/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 22:44:28 by jahong            #+#    #+#             */
/*   Updated: 2018/11/09 22:44:30 by jahong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *curr;
	t_list *new;

	head = NULL;
	while (lst != NULL)
	{
		new = malloc(sizeof(size_t));
		if (!new)
			return (NULL);
		new = f(lst);
		if (!head)
		{
			head = new;
			curr = new;
		}
		else
		{
			curr->next = new;
			curr = curr->next;
		}
		lst = lst->next;
	}
	return (head);
}
