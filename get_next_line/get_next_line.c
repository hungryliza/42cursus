/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limelo-c <limelo-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:56:45 by limelo-c          #+#    #+#             */
/*   Updated: 2025/12/12 14:41:46 by limelo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*line;
	ssize_t		bytes_read;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (buff_move(buff), NULL);
	while (1)
	{
		if (!*buff)
		{
			bytes_read = read(fd, buff, BUFFER_SIZE);
			if (bytes_read < 0)
				return (free(line), buff_move(buff), NULL);
			buff[bytes_read] = '\0';
			if (bytes_read == 0)
				return (line);
		}
		line = ft_strjoin(line, buff);
		buff_move(buff);
		if (!line || ft_strchr(line, ' '))
			return (line);
	}
	return (line);
}

int main()
{
	int fd = open("a.txt", O_RDWR);
	char *line = NULL;
	while ((line = get_next_line(fd)))
	{
		write(1, line, ft_strlen(line));
		free(line);
	}
}