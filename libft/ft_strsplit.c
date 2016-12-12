/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:00:46 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/04 16:18:00 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			ft_is_sep(char const s, char c)
{
	if ((char)s == c)
		return (1);
	else
		return (0);
}

static	size_t		ft_count_words(char const *s, char c)
{
	size_t	pos;
	size_t	n_word;
	size_t	trigger;

	if (!s)
		return (0);
	pos = 0;
	trigger = 0;
	n_word = 0;
	while (s[pos] != '\0')
	{
		if (ft_is_sep(s[pos], c) == 1)
			trigger = 0;
		else if (ft_is_sep(s[pos], c) == 0 && trigger == 0)
		{
			trigger = 1;
			n_word++;
		}
		pos++;
	}
	return (n_word);
}

static	size_t		ft_sub_len(char const *s, size_t pos, char c)
{
	size_t		len;

	len = 0;
	while (ft_is_sep(s[pos], c) == 0 && s[pos] != '\0')
	{
		pos++;
		len++;
	}
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**as;
	size_t	pos;
	size_t	word;

	if (!(as = (char**)malloc(sizeof(as) * ((ft_count_words(s, c) + 1)))))
		return (NULL);
	pos = 0;
	word = 0;
	while (word < ft_count_words(s, c))
	{
		while (ft_is_sep(s[pos], c) == 1)
			pos++;
		as[word] = ft_strsub(s, pos, ft_sub_len(s, pos, c));
		pos += ft_strlen(as[word]);
		if (as[word] == NULL)
			return (NULL);
		word++;
	}
	as[word] = NULL;
	return (as);
}
