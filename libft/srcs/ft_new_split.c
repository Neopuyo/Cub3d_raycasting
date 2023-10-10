/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:05:16 by amiguez           #+#    #+#             */
/*   Updated: 2022/10/06 04:38:03 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *line, char c);
static char	**ft_split_error(char **ret, int i);
static char	*get_word(char *line, char c);

/**
 * @brief the same as a split Except it ignore the charset inside quotes.
 * 
 * @param line The line to split
 * @param c The char to split
 * @return Return a char** of the words(+1 for the \0) or NULL if error.
 */
char	**ft_split_quotes(char *line, char c)
{
	char	**ret;
	int		i;
	int		word;

	if (!line)
		return (NULL);
	i = 0;
	word = count_word(line, c);
	ret = malloc((word + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	ret[word] = 0;
	while (i < word)
	{
		ret[i] = get_word(line, c);
		if (!ret[i])
			return (ft_split_error(ret, i - 1));
		line = line + ft_strlen(ret[i]) + 1;
		i++;
	}
	return (ret);
}

static char	**ft_split_error(char **ret, int i)
{
	while (i >= 0)
	{
		free(ret[i]);
		i--;
	}
	free(ret);
	return (NULL);
}

static char	*get_word(char *line, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (line[i] && line[i] == c)
		line++;
	while (line[i] != c && line[i])
	{
		if (line[i] == '\'' || line[i] == '\"')
			i += ft_skip_quote(&line[i]);
		i++;
	}
	word = ft_strndup(line, i);
	return (word);
}

static int	count_word(char *line, char c)
{
	int		word;

	word = 0;
	if (*line != '\0' && *line != c)
		word++;
	while (*line)
	{
		if (*line == c)
		{
			while (*line == c && *line)
				line++;
			if (*line)
				word++;
		}
		if (*line == '"' || *line == '\'')
			line += ft_skip_quote(line);
		if (*line)
			line++;
	}
	return (word);
}

/**
 * @brief Skip the content of a simple or double quotes.
 * 
 * @param line The pointer to the 1st simple/double quote
 * @return The numer of chars skipped
 */
int	ft_skip_quote(char *line)
{
	char	c;
	int		i;

	c = *line;
	i = 1;
	while (line[i] && line[i] != c)
	{
		i++;
	}
	return (i);
}
