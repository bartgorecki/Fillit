/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:47:51 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/25 14:05:30 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t	dstpos;
	size_t	srcpos;

	dstpos = 0;
	srcpos = 0;
	while (dst[dstpos] != '\0')
		dstpos++;
	while (src[srcpos] != '\0')
	{
		dst[dstpos] = src[srcpos];
		dstpos++;
		srcpos++;
	}
	dst[dstpos] = '\0';
	return (dst);
}
