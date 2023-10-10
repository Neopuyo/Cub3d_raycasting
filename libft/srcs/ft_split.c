/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:31:37 by amiguez           #+#    #+#             */
/*   Updated: 2022/10/08 08:01:38 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_is_charset(char str, char *charset);
static int	ft_wordlen(char *str, char *charset);
static int	ft_wordcount(char *str, char *charset);

/**
 * @brief split a char * into an array of char * By splitting on the charset.
 * 
 * @param s the string to split 
 * @param c The charset to split on.
 * @return A malloced array of char * or NULL if error.
 */
char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		size;
	int		i;
	int		j;
	char	charset[2];

	if (!s)
		return (NULL);
	charset[0] = c;
	charset[1] = '\0';
	i = 0;
	size = ft_wordcount((char *)s, charset);
	dest = malloc((size + 1) * sizeof(char *));
	if (!dest)
		return (0);
	while (i < size)
	{
		while (ft_is_charset((char)*s, charset))
			s++;
		j = ft_wordlen((char *)s, charset);
		dest[i++] = ft_strndup((char *)s, j);
		s += j;
	}
	dest[size] = 0;
	return (dest);
}

static int	ft_is_charset(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

static int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset) == 1)
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			j++;
	}
	return (j);
}
