/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 05:43:31 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 13:26:29 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstchr(t_list *lst, const void *chr, size_t n)
{
	while (n--)
	{
		if (!(ft_memcmp((const void *)lst->content, chr, sizeof(chr))))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
