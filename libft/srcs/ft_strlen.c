/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:47:10 by amiguez           #+#    #+#             */
/*   Updated: 2022/10/08 08:00:36 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Return the length of a string.
 */
int	ft_strlen(char const *s)
{
	int		i;
	char	*tmp;

	tmp = (char *) s;
	if (!tmp)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * @brief return the length of a tab.
 */
int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
