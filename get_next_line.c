/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvlho <jvlho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:36:46 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/15 15:57:51 by jvlho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char *get_next_line(int fd)
{
    static char buff[BUFFER_SIZE + 1];
    char *line;
    ssize_t verify;

    line = NULL;
    while (!has_newline(buff))
    {
        if (buff[0] == '\0')
            verify = read(fd, buff, BUFFER_SIZE);
        if (verify <= -1)
            return (free (line), NULL);
        if (verify == 0)
            break;
        line = ft_mod_join(line, buff);
        if (!line)
            return(free(line), NULL);
        if (!has_newline(buff))
            move_buff(buff);
    }
    if (!line)
        line = ft_mod_join(line, buff);
    if (!line)
        return (free(line), NULL);
    move_buff(buff);
    return (line);
}
