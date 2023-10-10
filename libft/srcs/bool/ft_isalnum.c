/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:55:08 by amiguez           #+#    #+#             */
/*   Updated: 2022/10/19 03:54:41 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief return EXIT_SUCCESS if c is a letter or a digit,
 * EXIT_FAILLURE otherwise
 */
int	ft_isalphanum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}

/**
 * @brief return EXIT_SUCCESS if all the char in str are letter or digit,
 * EXIT_FAILLURE otherwise
 */
int	ft_isall_alphanum(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (ft_isalphanum(arg[i]) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
