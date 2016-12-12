/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_coor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 13:33:07 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/12 15:32:17 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_linepassed(char *piece, int coor)
{
	int	passed;
	int	pos;

	pos = 0;
	passed = 0;
	while (piece[pos] != '#')
		pos++;
	while (coor--)
	{
		if (piece[pos] == '\n')
			passed++;
		pos++;
	}
	return (passed);
}

int	*ft_get_coor(char *piece)
{
	int	pos;
	int	*coor;

	pos = 0;
	if (!(coor = (int*)malloc(sizeof(coor) * 7)))
		return (NULL);
	coor[0] = 0;
	coor[1] = 1;
	coor[2] = 1;
	coor[3] = 1;
	while (piece[pos] != '#')
		pos++;
	while (pieces[pos + coor[1]] != '#')
		coor[1]++;
	coor[2] += coor[1];
	while (piece[pos + coor[2]] != '#')
	   coor[2]++;
	coor[3] += coor[2];
	while (piece[pos + coor[3]] != '#')
		coor[3]++;
	coor[4] = ft_linepassed(piece, coor[1]);
	coor[5] = ft_linepassed(piece, coor[2]);
	coor[6] = ft_linepassed(piece, coor[3]);
	return (coor);
}

int	ft_pieceslen(char **pieces)
{
	int	nb;

	nb = 0;
	while (pieces++)
		nb++;
	return (nb);
}

int	**ft_piece_coor(char **pieces)
{
	int	**pieces_coor;
	int	nb_pieces;
	int	pos;

	pos = 0;
	nb_pieces = ft_pieceslen(pieces);
	if (nb_pieces == 0)
		return (NULL);
	if (!(pieces_coor = (int **)malloc(sizeof(pieces_coor) * (nb + 1))))
		return (NULL);
	while (pos < nb_pieces)
	{
		if (!(pieces_coor[pos] = ft_get_coor(pieces[pos])))
		{
			while(pos--)
				free(pieces_coor[pos]);
			free(pieces_coor[0]);
			return (NULL);
		}
		pos++;
	}
	pieces_coor[pos] = NULL;
	return (pieces - nb_pieces);
}
