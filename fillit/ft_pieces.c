/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pieces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 15:29:25 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/12 15:00:52 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checktetro(char *piece)
{
	int	link;
	int	pos;

	link = 0;
	pos = 0;
	while (piece[pos] != '\0')
	{
		if (piece[pos] == '#')
		{
			if (pos - 5 >= 0)
				if (piece[pos - 5] == '#')
					link++;
			if (pos - 1 >= 0)
				if (piece[pos - 1] == '#')
					link++;
			if (pos + 1 < ft_strlen(piece))
				if (piece[pos + 1] == '#')
					link++;
			if (pos + 5 < ft_strlen(piece))
				link++;
		}
		pos++;
	}
	return (if (link == 6 || link == 8));
}

char	**ft_pieces(char *set)
{
	char	**pieces;
	int		pos;

	pos = 0;
	while (set++)
	{
		if (*set == '\n' && *(set + 1) == '\n')
			*(set + 1) = '\t';
	}
	pieces = ft_strsplit(set, '\t');
	while (pieces[pos])
	{
		if (!(ft_checktetro(pieces[pos])))
		{
			while (pos--)
				free(pieces[pos]);
			free(pieces);
			return (NULL);
		}
		pos++;
	}
	return (pieces);
}
