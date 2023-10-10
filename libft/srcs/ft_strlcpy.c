/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:37:21 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 18:55:06 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy a string to an other string.
 * 
 * @param dst The source string.
 * @param src where to put the copy of dst
 * @param n The number of bytes to copy.
 * @return size_t the number of bytes copied.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned long int	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && dstsize != i + 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
