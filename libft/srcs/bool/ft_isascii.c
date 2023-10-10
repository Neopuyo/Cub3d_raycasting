/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:52:15 by amiguez           #+#    #+#             */
/*   Updated: 2022/10/06 05:57:50 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief return EXIT_SUCCESS if c is a ascii char, EXIT_FAILLURE otherwise
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}

/**
 * @brief return EXIT_SUCCESS if all the char in str are ascii,
 * EXIT_FAILLURE otherwise
 */
int	ft_isall_ascii(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isascii(str[i]) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
