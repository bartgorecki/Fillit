/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:53:45 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/08 19:45:22 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int ac, char **av)
{
	//int		**tetrotab;
	char	*set;

	set = ft_getstr(av[ac - 1]);
	if(!ft_check_all(set))
		return (0);
	if (!ft_pieces(set))
		return (0);
	/*tetrotab = ft_get_pieces(set);
	return (0);*/
	printf("OK");
	return (0);
}
