/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:15:32 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/03 08:10:39 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*to_del;

	tmp = *alst;
	to_del = *alst;
	while (to_del != NULL)
	{
		tmp = tmp->next;
		del(to_del->content, to_del->content_size);
		free(to_del);
		to_del = tmp;
	}
	*alst = NULL;
}
