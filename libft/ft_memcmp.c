/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 04:03:34 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/03 08:29:35 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			pos;
	unsigned char	*ucs1;
	unsigned char	*ucs2;

	pos = 0;
	ucs1 = (unsigned char*)s1;
	ucs2 = (unsigned char*)s2;
	while (pos < n)
	{
		if (ucs1[pos] != ucs2[pos])
			return (ucs1[pos] - ucs2[pos]);
		pos++;
	}
	return (0);
}
