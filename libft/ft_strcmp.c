/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 00:51:08 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/27 16:34:10 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	char	*ptr1;
	char	*ptr2;
	int		pos;

	ptr1 = (char*)s1;
	ptr2 = (char*)s2;
	pos = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return (0);
	while (ptr1[pos] == ptr2[pos] && (ptr1[pos] != '\0' && ptr2[pos] != '\0'))
		pos++;
	return ((unsigned char)ptr1[pos] - (unsigned char)ptr2[pos]);
}
