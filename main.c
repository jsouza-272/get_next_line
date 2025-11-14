/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:55:38 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/14 16:27:01 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

int main ()
{
    int fd = 0;
    fd = open("test.txt", O_RDONLY);
    char *s;
    for(int i = 0; i < 8; i++)
    {
        s = get_next_line(fd);
        printf("%s", s);
    }
    /* s = get_next_line(fd);
    printf("len s >>%zu\t%s", strlen(s), s);
    s = get_next_line(fd);
    printf("len s >>%zu\t%s", strlen(s), s); */
    close(fd);
}