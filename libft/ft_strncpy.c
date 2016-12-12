/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:18:54 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/25 14:05:01 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	pos;

	pos = 0;
	while (src[pos] != '\0' && pos < n)
	{
		dst[pos] = src[pos];
		pos++;
	}
	while (pos < n)
	{
		dst[pos] = '\0';
		pos++;
	}
	return (dst);
}
