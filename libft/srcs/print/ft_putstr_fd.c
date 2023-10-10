/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 04:18:29 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 17:30:49 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Printf a string on a file descriptor.
 * 
 * @param s The string to print.
 * @param fd Where to print.
 * @return The numbers of charachter written.
 */
int	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return (0);
	write (fd, s, ft_strlen(s));
	return (ft_strlen(s));
}
