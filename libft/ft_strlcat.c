/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 19:50:50 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 14:01:49 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	pos;
	size_t	dstlen;

	pos = 0;
	while (dst[pos] && pos < size)
		pos++;
	if (pos == size)
		return (pos + ft_strlen(src));
	dstlen = pos;
	while (src[pos - dstlen] && pos < size - 1)
	{
		dst[pos] = src[pos - dstlen];
		pos++;
	}
	if (dstlen < size)
		dst[pos] = '\0';
	return (dstlen + ft_strlen(src));
}
