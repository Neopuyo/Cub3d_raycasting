/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 04:03:17 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 17:29:19 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Print a char on a file descriptor.
 * 
 * @param c The char to print.
 * @param fd Where to print.
 * @return the number of charachter written.
 */

int	ft_putchar_fd(char c, int fd)
{
	return (write (fd, &c, 1));
}
