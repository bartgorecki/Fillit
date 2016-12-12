/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:34:24 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/12 00:26:06 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int i, size_t len)
{
	unsigned char	*dst;
	size_t			count;

	dst = (unsigned char*)arr;
	count = 0;
	while (count < len)
	{
		dst[count] = (unsigned char)i;
		count++;
	}
	return (arr);
}
