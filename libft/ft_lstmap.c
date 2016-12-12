/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:00:21 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/03 01:32:30 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	if (!(head = f(lst)))
		return (NULL);
	tmp = head;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp->next = f(lst)))
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	tmp->next = NULL;
	return (head);
}
