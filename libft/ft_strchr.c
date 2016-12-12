/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 04:51:14 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/30 15:41:39 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	if (chr != '\0' && ft_strlen(str) == 0)
		return (NULL);
	if (chr == '\0')
		return ((char *)str + ft_strlen(str));
	return ((char *)ft_memchr((void *)str, chr, ft_strlen(str)));
}
