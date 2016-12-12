/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 05:44:35 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 16:19:56 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *lst)
{
	t_list	*new;
	t_list	*head;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
	{
		return (NULL);
	}
	ft_memcpy(new->content, lst->content, lst->content_size);
	new->content_size = lst->content_size;
	new->next = NULL;
	head = new;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(new->next = (t_list*)malloc(sizeof(t_list))))
		{
			return (head);
		}
		new = new->next;
		ft_memcpy(new->content, lst->content, lst->content_size);
		new->content_size = lst->content_size;
		new->next = NULL;
		lst = lst->next;
	}
	return (head);
}
