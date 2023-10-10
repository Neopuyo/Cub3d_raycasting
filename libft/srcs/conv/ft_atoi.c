/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:44:26 by amiguez           #+#    #+#             */
/*   Updated: 2022/10/06 06:44:27 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief recreation of the atoi function ---
 * Take one int in char and return it in int
 * 
 * @param str The int in char*
 * @return The int contend in str
 */
int	ft_atoi(const char *str)
{
	int			i;
	long int	ret_int;
	int			minus;

	if (!str)
		return (0);
	ret_int = 0;
	i = 0;
	minus = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		||str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i += 1;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		ret_int = ret_int * 10 + (str[i] - 48);
		i++;
	}
	return (ret_int * minus);
}
