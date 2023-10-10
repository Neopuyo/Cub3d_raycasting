/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:25:50 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 17:24:38 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Print unsigned number on a file descriptor.
 * 
 * @param n The number to print.
 * @param fd Where to print.
 * @return the number of charachter written.
 */
int	ft_put_unnbr_fd(unsigned int n, int fd)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_put_unnbr_fd(n / 10, fd);
	i += ft_putchar_fd(n % 10 + '0', fd);
	return (i);
}
