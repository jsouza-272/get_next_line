/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:36:46 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/18 10:53:18 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * OPEN_MAX <- limite minimo garantido pelo padrao C
 */

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*line;
	ssize_t		verify;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (!has_newline(buff))
	{
		verify = fill_buff(buff, fd, &line);
		if (verify == 0)
			break ;
		if (verify == -1)
			return (free(line), NULL);
		if (!has_newline(buff))
			move_buff(buff);
	}
	if (!line)
		line = ft_mod_join(line, buff);
	if (!line)
		return (NULL);
	move_buff(buff);
	return (line);
}
