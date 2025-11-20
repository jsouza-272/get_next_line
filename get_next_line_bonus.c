/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:36:46 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/20 14:40:59 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buff[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	ssize_t		verify;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (!has_newline(buff[fd]))
	{
		verify = fill_buff(buff[fd], fd, &line);
		if (verify == -1)
			return (free(line), NULL);
		if (!verify)
			break ;
		if (!has_newline(buff[fd]))
			move_buff(buff[fd]);
	}
	if (!line && has_newline(buff[fd]))
		line = ft_mod_join(line, buff[fd]);
	if (!line)
		return (NULL);
	move_buff(buff[fd]);
	return (line);
}
