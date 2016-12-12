/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:14:48 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/03 05:18:46 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_is_space(char const c)
{
	if (c == ' ' || c == ',' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_is_space(s[start]) == 1)
		start++;
	if (start == ft_strlen(s))
		return (ft_strnew(0));
	while (ft_is_space(s[end]) == 1)
		end--;
	if (start == 0 && (end + 1) == ft_strlen(s))
		return (ft_strdup(s));
	else
	{
		len = end - start + 1;
		return (ft_strsub(s, start, len));
	}
}
