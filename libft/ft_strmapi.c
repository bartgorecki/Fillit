/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:28:13 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/27 18:17:11 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	pos;
	char			*new;

	pos = 0;
	if (!s || !f)
		return (NULL);
	if (!(new = (char*)malloc(sizeof(*new) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[pos] != '\0')
	{
		new[pos] = f(pos, s[pos]);
		pos++;
	}
	new[pos] = '\0';
	return (new);
}
