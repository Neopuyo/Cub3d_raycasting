/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 03:32:50 by amiguez           #+#    #+#             */
/*   Updated: 2022/10/06 05:58:04 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief return EXIT_SUCCESS if c is a letter, EXIT_FAILLURE otherwise
 */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}

/**
 * @brief retrun EXIT_SUCCESS if all the char in str are letter,
 * EXIT_FAILLURE otherwise
 */
int	ft_isall_alpha(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (ft_isalpha(arg[i]) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
