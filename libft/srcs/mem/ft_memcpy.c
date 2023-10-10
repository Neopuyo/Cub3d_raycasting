/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:34:47 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 15:22:00 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy a memory area to an other area.
 * 
 * @param dst The source memory area.
 * @param src where to put the copy of dst
 * @param n The number of bytes to copy.
 * @return void* of dst
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dest;

	dest = dst;
	if (!src && !dst)
		return (NULL);
	while (n)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
		n--;
	}
	return (dest);
}
