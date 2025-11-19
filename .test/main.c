/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:55:38 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/19 16:12:45 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <string.h>

/**
 * nao esquecer de dar free no main
 * nao abrir big.txt
 * head -c 1000000 /dev/zero | tr '\0' 'A' > big.txt    <<--criar arquivo de 1mb usar com cuidado
 */

int main ()
{
    int fd = 0;
    int fd2 = 0;
    int fd3 = 0;
    int fd4 = 0;
    fd = open(".test/text.txt", O_RDONLY);
    fd2 = open(".test/empty.txt", O_RDONLY);
    fd3 = open(".test/new_line.txt", O_RDONLY);
    fd4 = open(".test/big.txt", O_RDONLY);
    char *s;
    printf("%d", fd);
    /* for(int i = 0; i < 16; i++)
    {
        s = get_next_line(fd);
        printf("%s", s);
        free(s);
        s = get_next_line(fd2);
        printf("file 2:   %s", s);
        free(s);
        s = get_next_line(fd3);
        printf("file 3:   %s", s);
        free(s);
    } */
    s = get_next_line(fd4);
    printf("%s", s);
    free(s);
    close(fd);
    close(fd2);
    close(fd3);
    close(fd4);
}