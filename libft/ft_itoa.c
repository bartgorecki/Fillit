/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:44:57 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 16:36:21 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_fill_itoa(int n, char *s, int len)
{
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	s[len - 1] = '\0';
	len = len - 2;
	while (n > 9)
	{
		s[len] = (n % 10) + 48;
		len--;
		n = n / 10;
	}
	s[len--] = n + 48;
	return (s);
}

char			*ft_itoa(int n)
{
	char	*new;
	int		len;
	int		tmp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = 2;
	tmp = n;
	if (n < 0)
	{
		len++;
		tmp = -n;
	}
	while (tmp > 9)
	{
		tmp /= 10;
		len++;
	}
	if (!(new = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	return (ft_fill_itoa(n, new, len));
}
