/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:38:52 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 15:28:07 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fill a memory area with n bytes of an unsigned char.
 * 
 * @param b Where to write
 * @param c Unsigned char
 * @param len The nb of bytes to write
 * @return void* b
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		filler;
	char				*str;
	unsigned long int	i;

	str = b;
	i = 0;
	filler = c;
	while (i < len)
	{
		str[i] = filler;
		i++;
	}
	return (b);
}
