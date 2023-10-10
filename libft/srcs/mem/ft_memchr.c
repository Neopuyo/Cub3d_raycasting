/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:17:36 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 18:08:20 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Found the 1st occurence of the character c in the string s.
 * 
 * @param s String to search in.
 * @param c The char to found
 * @param n the numbers of bytes to search
 * @return pointer to c, NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long int	i;
	unsigned char		*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == *str)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
