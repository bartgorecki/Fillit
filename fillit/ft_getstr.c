/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:49:48 by bgorecki          #+#    #+#             */
/*   Updated: 2016/12/08 19:39:47 by bgorecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_getstr(char *filename)
{
	int		fd;
	char	*buf[1];
	char	*str;
	size_t	len;
	int		ret;

	len = 0;
	fd = open(filename, O_RDONLY);
	while ((ret = read(fd, buf, 1)) > 0 && buf[0] != '\0')
		len++;
	if (ret == -1)
		return (NULL);
	str = (char*)malloc(sizeof(char*) * (len + 1));
	close(fd);
	fd = open(filename, O_RDONLY);
	read(fd, str, len);
	close(fd);
	str[len] = '\0';
	return (str);
}
