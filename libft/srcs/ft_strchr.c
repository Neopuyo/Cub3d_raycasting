/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:24:54 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 18:42:34 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Find the first occurence of a character in a string.
 * 
 * @param str the string to search in.
 * @param c the character to search.
 * @return the pointer to the first occurence of c in str.
 */
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (*str == (char) c)
			return (str);
		str++;
	}
	if (c == 0)
		return (str);
	return (0);
}
