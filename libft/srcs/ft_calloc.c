/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 01:22:20 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 14:37:02 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief allocates memory and fills it with 0s
 * 
 * @param count number of bytes to allocate
 * @param size the size of each element to allocate
 * @return the pointer to the allocated memory -or- NULL if error
 */
void	*ft_calloc(size_t count, size_t size)
{
	unsigned long int	i;
	char				*str_ret;

	i = 0;
	str_ret = malloc (count * size);
	if (!str_ret)
		return (NULL);
	while (i < count * size)
	{
		str_ret[i] = 0;
		i++;
	}
	return (str_ret);
}
