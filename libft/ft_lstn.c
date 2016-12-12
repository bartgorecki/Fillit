/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 11:39:25 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 16:34:35 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstn(t_list *lst, size_t n)
{
	if (n == 0)
		return (lst);
	while (n--)
	{
		if (lst->next)
			lst = lst->next;
		else
			return (lst);
	}
	return (lst);
}
