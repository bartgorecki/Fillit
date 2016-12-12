/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 23:34:12 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/28 17:09:45 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ucdst;
	unsigned char	*ucsrc;
	size_t			pos;

	pos = 0;
	ucdst = (unsigned char *)dst;
	ucsrc = (unsigned char *)src;
	if (!len)
		return (dst);
	if (dst >= src)
		return (ft_memcpy(dst, src, len));
	while (pos < len)
	{
		ucdst[pos] = ucsrc[pos];
		pos++;
	}
	return (dst);
}
