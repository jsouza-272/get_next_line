/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:36:46 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/14 17:13:11 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char *get_next_line(int fd)
{
    static char buff[BUFFER_SIZE + 1];
    char *line;
    //size_t i;   // << NOME TEMPORARIO
    ssize_t j;  // << NOME TEMPORARIO


    //verificar se o buff tem \n se nao tiver dar read e fazer o join da line

    line = NULL;
    //printf(">>%zd<<", find_new_line(buff));
    //fflush(stdout);
    while (buff[0] == '\0')
    {
        if (buff[0] == '\0')
            j = read(fd, buff, BUFFER_SIZE);
        if (j == 0)
            break;
        line = ft_mod_join(line, buff);
        if (!line)
            return(free(line), NULL);
    }
    if (!line)
        line = ft_mod_join(line, buff);
    if (!line)
        return (free(line), NULL);
    move_buff(buff);
    return (line);
}
