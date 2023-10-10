/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 04:18:29 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 17:30:38 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Printf a string in to a fd with a newline at the end.
 * 
 * @param s The string to print.
 * @param fd Where to print.
 * @return The numbers of charachter written.
 */
int	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	i += write (fd, s, ft_strlen(s));
	i += write (fd, "\n", 1);
	return (i);
}
