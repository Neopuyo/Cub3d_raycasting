/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:05:01 by amiguez           #+#    #+#             */
/*   Updated: 2022/10/06 05:57:18 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief return (EXIT_SUCCESS) if c is a printable character,
 * (EXIT_FAILURE) otherwise
 */
int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}

/**
 * @brief return (EXIT_SUCCESS) if all the char in str are printable,
 * (EXIT_FAILURE) otherwise
 */
int	ft_isall_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isprint(str[i]))
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
