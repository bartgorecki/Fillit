/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:46:11 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 13:06:57 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dst[pos] = src[pos];
		pos++;
	}
	dst[pos] = '\0';
	return (dst);
}
