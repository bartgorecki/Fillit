/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 01:51:27 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/30 17:49:46 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	pos;

	ptr1 = (char*)s1;
	ptr2 = (char*)s2;
	pos = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return (0);
	while (pos < n && ptr1[pos] == ptr2[pos])
	{
		if (ptr1[pos] == '\0' || ptr2[pos] == '\0')
			return (ptr1[pos] - ptr2[pos]);
		pos++;
	}
	if (pos == n)
		pos--;
	return ((unsigned char)ptr1[pos] - (unsigned char)ptr2[pos]);
}
