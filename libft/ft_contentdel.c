/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contentdel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 08:02:21 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 12:38:29 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_contentdel(t_list *lst, size_t size)
{
	size = 0;
	free(lst->content);
	lst->content = NULL;
	lst->content_size = size;
}
