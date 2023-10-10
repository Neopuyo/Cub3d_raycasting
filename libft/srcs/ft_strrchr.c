/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:10:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 19:01:42 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Find the last occurence of a character in a string.
 * 
 * @param str the string to search in.
 * @param c the character to search.
 * @return the pointer to c.
 */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(s);
	while (i != -1)
	{
		if (str[i] == (char) c)
			return ((char *)&str[i]);
		i--;
	}
	if (c == 0)
		return ((char *)&str[ft_strlen(s)]);
	return (0);
}
