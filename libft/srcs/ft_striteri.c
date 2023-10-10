/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 03:49:32 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 18:45:05 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterate over a string and apply a function to each character.
 * 
 * @param str the string to iterate.
 * @param f the function to apply.
 * @return void
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned long int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f (i, &s[i]);
		i++;
	}
}
