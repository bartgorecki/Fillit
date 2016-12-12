/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:26:44 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/08 19:36:42 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checksep(const char *set)
{
	while (*set != '\0')
	{
		if (*set == '\n')
			return (1);
		set++;
	}
	return (0);
}

int	ft_checkif(const char *set, int col, int line)
{
	if (*set == '\n' && col != 4 && col != 0)
		return (0);
	if (*set == '\n' && *(set + 1) == '\n' && *(set + 2) == '\n')
		return (0);
	if (*set == '\n' && *(set + 1) == '\0' && line != 4)
		return (0);
	if (line > 4)
		return (0);
	if (*set == '\0' && line != 0 && col != 0)
		return (0);
	if (*set == '\n' && *(set + 1) == '\n' && line != 4)
		return (0);
	return (1);
}

int	ft_checkall(char *set)
{
	int	col;
	int	line;

	col = 0;
	line = 0;
	if (!ft_checksep(set))
		return (0);
	while (*set != '\0')
	{
		if (*set != '.' && *set != '#' && *set != '\n')
			return (0);
		if (*set != '\n')
			col++;
		set++;
		if (*set == '\n' && col == 4)
		{
			col = 0;
			line++;
		}
		else if (*set == '\n' && line == 4 && col == 0)
			line = 0;
		if (!ft_checkif(set, col, line))
				return (0);
	}
	return (1);
}
