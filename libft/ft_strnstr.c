/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 02:20:19 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/03 05:04:41 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	to_len;

	to_len = 0;
	if (len < ft_strlen(to_find) && to_find && str)
		return (NULL);
	len = len - ft_strlen(to_find) + 1;
	if ((char)*to_find == '\0')
		return ((char *)str);
	while ((char)*str != '\0' && to_len < len)
	{
		if (ft_strncmp(str, to_find, ft_strlen(to_find)) == 0)
			return ((char*)str);
		str++;
		to_len++;
	}
	return (NULL);
}
