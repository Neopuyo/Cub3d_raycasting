/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:57:32 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/18 02:49:27 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_choose_to_join(char const *s1, char const *s2);

/**
 * @brief Join two strings.
 * 
 * @param s1 the first string.
 * @param s2 the second string.
 * @return the joined string.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_ret;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (ft_choose_to_join(s1, s2));
	i = -1;
	j = 0;
	s_ret = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s_ret)
		return (NULL);
	while (s1[++i])
	{
		s_ret[j] = s1 [i];
		j++;
	}
	i = -1;
	while (s2[++i])
	{
		s_ret[j] = s2[i];
		j++;
	}
	s_ret[j] = '\0';
	return (s_ret);
}

char	*ft_choose_to_join(char const *s1, char const *s2)
{
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	return (NULL);
}

/**
 * @brief Join two strings.
 * 	And free one (or both) depending on the parameter.
 * (If parameter is not recognized, the function will free both strings)
 * @param s1 The 1st string
 * @param s2 The 2nd string
 * @param fr FREE_S1 or FREE_S2 or FREE_BOTH
 * @return char* 
 */
char	*ft_strjoin_free(char *s1, char *s2, int fr)
{
	char	*s_ret;

	s_ret = ft_strjoin(s1, s2);
	if (fr != FREE_S2 && s1)
		free(s1);
	if (fr != FREE_S1 && s2)
		free(s2);
	return (s_ret);
}
