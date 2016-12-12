/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 06:17:47 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/30 18:37:26 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*new;
	int		pos;

	if (!f || !s)
		return (NULL);
	pos = 0;
	if (!(new = (char*)malloc(sizeof(*new) * (ft_strlen(s) + 1))))
		return (NULL);
	if (s && f)
	{
		while (s[pos])
		{
			new[pos] = f(s[pos]);
			pos++;
		}
		new[pos] = '\0';
		return (new);
	}
	return (NULL);
}
