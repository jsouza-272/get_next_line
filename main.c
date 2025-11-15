/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvlho <jvlho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:55:38 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/15 15:47:06 by jvlho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

int main ()
{
    int fd = 0;
    fd = open("test.txt", O_RDONLY);
    char *s;
    for(int i = 0; i < 18; i++)
    {
        s = get_next_line(fd);
        printf("%s", s);
    }
    /* s = get_next_line(fd);
    printf("%d<<len s >>%zu\t%s",i++, strlen(s), s);
    s = get_next_line(fd);
    printf("%d<<len s >>%zu\t%s",i++, strlen(s), s);
    s = get_next_line(fd);
    printf("%d<<len s >>%zu\t%s",i++, strlen(s), s);
    s = get_next_line(fd);
    printf("%d<<len s >>%zu\t%s",i++, strlen(s), s);
    s = get_next_line(fd);
    printf("%d<<len s >>%zu\t%s",i++, strlen(s), s);
    s = get_next_line(fd);
    printf("%d<<len s >>%zu\t%s",i++, strlen(s), s);
    s = get_next_line(fd);
    printf("%d<<len s >>%zu\t%s",i++, strlen(s), s); */
    //char *str = "uma linha extremamente grande eu derrame ahsdaghdasdbajhdfvshhavdkjhsvsdjhkhsdvsgljkhajsgksuja.sbddkgfslugf.jasbvcgdkyslkuda.jbvcdkgsylkajcfvgdyskjbdvhslkldhnssVYIULKDSAJASDJVSDGKAD65A4D8A46DS51AD47A6S4D3A1SD45A4646s541d3asvf4684a5s12xc v58e6 51z4 6as5 132 486a4scf684f848q56awd14SB1dsa56s1d56as1d5a1sd5a1sd51as5d1as56d1a563s1d56a1sd5a631sd563a1sd56a1sd56a1d5a1d5asd5a1d5a1d63a1d6a1d56a4sd65a14d56as1d56a1sd5a14da14d56a14fds514fv5xc145684sd5684as651as5c1s5d1f58a4s51da63s1d6as1d23a1d3a1d3a1sd32a123d1a321d23as1d23a1d23a13da23d1as23d1a23s1d23a1d23a1d23a1d23a1d3a1ds3a1d23a1sd23ad23a1d23ad2ad2a1d2a1d2asd2a1d23as1da23d1a231d3as1d3as1da3d1a31d23a1d3a1d3a1d32asd1a23sd1a21d23as1d3a1sd32a1d23a1d23a1d23a1d23a1d2asaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    //char *str = "uma linha extremamente grande eu derrame ahsdaghdasdbajhdfvshhavdkjhsvsdjhkhsdvsgljkhajsgksuja.sbddkgfslugf.jasbvcgdkyslkuda.jbvcdkgsylkajcfvgdyskjbdvhslkldhnssVYIULKDSAJASDJVSDGKAD65A4D8A46DS51AD47A6S4D3A1SD45A4646s541d3asvf4684a5s12xc v58e6 51z4 6as5 132 486a4scf684f848q56awd14SB1dsa56s1d56as1d5a1sd5a1sd51as5d1as56d1a563s1d56a1sd5a631sd563a1sd56a1sd56a1d5a1d5asd5a1d5a1d63a1d6a1d56a4sd65a14d56as1d56a1sd5a14da14d56a14fds514fv5xc145684sd5684as651as5c1s5d1f58a4s51da63s1d6as1d23a1d3a1d3a1sd32a123d1a321d23as1d23a1d23a13da23d1as23d1a23s1d23a1d23a1d23a1d23a1d3a1ds3a1d23a1sd23ad23a1d23ad2ad2a1d2a1d2asd2a1d23as1da23d1a231d3as1d3as1da3d1a31d23a1d3a1d3a1d32asd1a23sd1a21d23as1d3a1sd32a1d23a1d23a1d23a1d23a1d2asaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    /* int i = 0;
    while (str[i])
    {
        i++;
    }
    printf("%d", i); */
    close(fd);
}