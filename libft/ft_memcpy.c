/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 20:45:22 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/03 08:02:34 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ucdst;
	unsigned char	*ucsrc;

	ucdst = (unsigned char*)dst;
	ucsrc = (unsigned char*)src;
	while (n != 0)
	{
		ucdst[n - 1] = ucsrc[n - 1];
		n--;
	}
	return (dst);
}
