/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:16:58 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/08/17 23:04:48 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_str(char *str, int fd)
{
	int		read_byte;
	char	*buffer;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	read_byte = 1;
	while (!ft_newline(buffer) && read_byte != 0)
	{
		read_byte = read(fd, buffer, BUFFER_SIZE);
		if (read_byte == -1)
			return (ft_error(buffer));
		buffer[read_byte] = '\0';
		if (!str)
		{
		str = malloc(1 * sizeof(char));
		str[0] = '\0';
		}
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*ft_getline(char *str)
{
	char	*buffer;
	int		len;
	int		counter;

	if (!str)
		return (NULL);
	len = 0;
	counter = 0;
	while(str[len] && str[len] != '\n')
		len++;
	buffer = malloc((len + 2) * sizeof(char));
	if (!buffer)
		return (NULL);
	while (counter <= len)
	{
		buffer[counter] = str[counter];
		counter++;
	}
	buffer[counter] = '\0';
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*next_line;
	char		*the_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	the_line = "";
	next_line = ft_get_str(next_line, fd);
	if (!next_line)
		return (NULL);
	the_line = ft_getline(next_line);
	if (the_line[0] == '\0')
	{
		free(next_line);
		free(the_line);
		return (NULL);
	}
	next_line = ft_newline(next_line);
	return (the_line);
}