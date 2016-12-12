/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 23:34:30 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/30 16:58:23 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	if ((char)*to_find == '\0')
		return ((char *)str);
	if (ft_strlen(to_find) > ft_strlen(str))
		return (NULL);
	while ((char)*str != '\0')
	{
		if (ft_memcmp(str, to_find, ft_strlen(to_find)) == 0)
			return ((char*)str);
		str++;
	}
	return (NULL);
}
