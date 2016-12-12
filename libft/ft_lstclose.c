/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclose.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 12:01:53 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 13:29:00 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclose(t_list *lst)
{
	t_list	*head;

	head = lst;
	while (lst->next)
		lst = lst->next;
	lst->next = head;
}
