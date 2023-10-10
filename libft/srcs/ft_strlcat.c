/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:49:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 18:54:57 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Append the string src to the string dst. (Look at man strlcat for more)
 * 
 * @param dst the destination string.
 * @param src the source string.
 * @param size the size of the destination string.
 * @return size_t the size of the destination string.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long int	i;
	unsigned long int	j;
	unsigned long int	k;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	k = j;
	if (size == 0 || i > size)
		return (size + j);
	if (!src)
		return (i);
	j = 0;
	while (src[j] && (i + j < size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + k);
}
