/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:21:22 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/27 18:30:08 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
	{
		if (!s1 && !s2)
			return (1);
		else
			return (0);
	}
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}
