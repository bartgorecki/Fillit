/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 08:15:09 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 13:29:59 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_list **alst)
{
	size_t len;

	if (!alst)
		return (0);
	len = 1;
	while (*alst != NULL)
	{
		(*alst) = (*alst)->next;
		len++;
	}
	return (len);
}
