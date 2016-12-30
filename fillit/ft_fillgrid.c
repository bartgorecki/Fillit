/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillgrid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 16:54:51 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/12 18:10:24 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillih.h"

static	int	ft_min_size(pieces_coor)
{
	int	size;
	int	nb_pieces;

	size = 0;
	nb_pieces = 0;
	while (pieces_coor++)
		nb_pieces++;
	while ((size * size) < (4 * nb_pices))
		size++;
	return (size);
}

static	char	*ft_fill(char *grid, int **pieces_coor, char *instruction)
{
	if (pieces_coor)
	{
		if (instruction == "place")
		{
			if (!ft_put_piece(grid, pieces_coor))
				return (ft_fill(grid, pieces_coor, "remove"));
			else
			{
				pieces_coor++;
				return (ft_fill(grid, pieces_coor, "place"));
			}
		}
		else if (instruction == "remove")
		{
			ft_remove_piece(grid, pieces_coor);
			pieces_coor--;
			return (ft_fill(grid, pieces_coor, "place"));
		}
	}
	return (grid);
}

char		*ft_fillgrid(int **pieces_coor)
{
	char	*grid;
	int		size;
	int		grid_size;

	size = ft_min_size(pieces_coor);
	grid_size = size * (size + 1) + 1;
	if (!(grid = (char *)malloc(sizeof(grid) * grid_size)))
		return (NULL);
	while (!(grid = ft_fill(grid, pieces_coor, "place")))
	{
		free(grid);
		size++;
		grid_size = size * (size + 1) + 1;
		if (!(grid = (char *)malloc(sizeof(grid) * grid_size)))
			return (NULL);
	}
	return (grid);
}
