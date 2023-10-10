/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:07:09 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 15:20:09 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares bytes per bytes 2 strings of lenght n
 * 
 * @param s1 string 1
 * @param s2 string 2
 * @param n the lenght of the strings
 * @return Unsigned char of the substraction of the 1st difference(s1 - s2)
 * , or 0 otherwise
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long int	i;
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
