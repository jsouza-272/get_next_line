/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:36:49 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/19 12:05:10 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

ssize_t	find_new_line(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char	*ft_mod_join(char *s1, char *s2)
{
	char	*join;
	size_t	i;
	ssize_t	j;

	i = find_new_line(s1);
	j = find_new_line(s2);
	join = malloc((j + i + 1) * sizeof(char));
	if (!join)
		return (free(s1), NULL);
	join[i + j] = '\0';
	j = 0;
	i = 0;
	while (s1 && s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j] && s2[j] != '\n')
	{
		join[i + j] = s2[j];
		j++;
	}
	if (s2[j] == '\n')
		join[i + j] = s2[j];
	return (free(s1), join);
}

void	move_buff(char *buff)
{
	size_t	i;
	ssize_t	j;

	i = 0;
	j = 0;
	while (buff[i] != '\0')
	{
		if (buff[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	while (buff[i + j] != '\0')
	{
		buff[j] = buff[i + j];
		j++;
	}
	while (j < BUFFER_SIZE)
	{
		buff[j] = '\0';
		j++;
	}
}

int	has_newline(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	fill_buff(char *buff, int fd, char **line)
{
	int	verify;

	verify = 1;
	if (buff[0] == '\0')
		verify = read(fd, buff, BUFFER_SIZE);
	if (verify <= -1)
		return (-1);
	if (verify == 0)
		return (0);
	*line = ft_mod_join(*line, buff);
	if (!line)
		return (-1);
	return (verify);
}
