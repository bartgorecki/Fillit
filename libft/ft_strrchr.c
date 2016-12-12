/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 21:05:00 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/03 04:45:26 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	size_t	len;

	len = ft_strlen(str) + 1;
	if (ft_strchr(str, chr) == NULL)
		return (NULL);
	while (*str != '\0')
		str++;
	while (len--)
	{
		if (*str == chr)
			return ((char *)str);
		str--;
	}
	return (NULL);
}
