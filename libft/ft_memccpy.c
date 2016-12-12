/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 01:04:31 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/28 16:49:38 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	trigger;
	unsigned char	*ucsrc;
	unsigned char	*ucdst;
	size_t			count;

	count = 0;
	ucsrc = (unsigned char *)src;
	ucdst = (unsigned char *)dst;
	trigger = (unsigned char)c;
	while (count < n)
	{
		if ((*ucdst++ = *ucsrc++) == trigger)
			return (ucdst);
		count++;
	}
	return (NULL);
}
