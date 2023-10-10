/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 01:10:05 by amiguez           #+#    #+#             */
/*   Updated: 2022/10/08 07:45:55 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_tabdup_error(char **ret, int i);

/**
 * @brief Same as a ft_strdup Exept it copy the content of a char **.
 * 
 * @param tab pointer to the char ** to copy.
 * @return New malloced char ** or NULL if error.
 */
char	**ft_tabdup(char **tab)
{
	char	**ret;
	int		i;

	i = 0;
	ret = malloc((ft_tablen(tab) + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	ret[ft_tablen(tab)] = 0;
	while (tab[i])
	{
		ret[i] = ft_strdup(tab[i]);
		if (!ret[i])
			return (ft_tabdup_error(ret, i - 1));
		i++;
	}
	return (ret);
}

static char	**ft_tabdup_error(char **ret, int i)
{
	while (i >= 0)
	{
		free(ret[i]);
		i--;
	}
	free(ret);
	return (NULL);
}
