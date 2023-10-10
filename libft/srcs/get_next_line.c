/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:31:06 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/18 02:48:37 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chek_nl(char *line);
static void	set_nl(char *line, char *stat);
static char	*ret_nl(char *ln, int i);
char		*gnl_join(char *s1, char *s2);

/**
 * @brief Read a line from a file descriptor.
 * 
 * @param fd The file descriptor to read from.
 * @return A pointer to the line read.
 */
char	*get_next_line(int fd)
{
	char		*line;
	static char	stat[OPEN_MAX][BUFFER_SIZE + 1];
	char		temp[BUFFER_SIZE + 1];
	int			i;

	line = 0;
	i = BUFFER_SIZE;
	if (fd < 0 || BUFFER_SIZE == 0)
		return (NULL);
	if (*stat[fd])
	{
		line = ft_strdup(stat[fd]);
		*stat[fd] = 0;
	}
	while (chek_nl(line) == -1 && i == BUFFER_SIZE)
	{
		i = read(fd, temp, BUFFER_SIZE);
		if (i <= 0)
			return (ret_nl(line, i));
		temp[i] = '\0';
		line = ft_strjoin_free(line, temp, FREE_S1);
	}
	if (chek_nl(line) != -1)
		set_nl(line, (char *)stat[fd]);
	return (line);
}

char	*gnl_join(char *s1, char *s2)
{
	if (!s1)
		return (ft_strdup(s2));
	return (ft_strjoin_free(s1, s2, FREE_S1));
}

static int	chek_nl(char *line)
{
	int	i;

	i = 0;
	if (!line)
		return (-1);
	while (line[i])
	{
		if (line[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static void	set_nl(char *line, char *stat)
{
	char	*temp;
	int		i;

	i = 0;
	temp = ft_strdup(&line[chek_nl(line) + 1]);
	line[chek_nl(line) + 1] = '\0';
	while (temp[i])
	{
		stat[i] = temp[i];
		i++;
	}
	stat[i] = 0;
	free (temp);
}

static char	*ret_nl(char *ln, int i)
{
	if (i == -1)
	{
		free (ln);
		return (NULL);
	}
	return (ln);
}
