/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:16:04 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 16:17:34 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	pos;

	pos = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if (!(new = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (pos < len && s[start] != '\0')
	{
		new[pos] = s[start];
		pos++;
		start++;
	}
	new[pos] = '\0';
	return (new);
}
