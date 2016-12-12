/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 04:56:26 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 13:06:48 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		len;

	len = ft_strlen(src);
	if (!(dst = (char*)malloc(sizeof(*dst) * (len + 1))))
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}
