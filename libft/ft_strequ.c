/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:41:46 by bgorecki          #+#    #+#             */
/*   Updated: 2016/11/27 18:28:41 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
	{
		if (!s1 && !s2)
			return (1);
		else
			return (0);
	}
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}
