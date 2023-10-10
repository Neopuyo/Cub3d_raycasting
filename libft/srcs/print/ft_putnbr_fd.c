/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 04:29:10 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 17:24:12 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_rite(char c, int fd)
{
	return (write(fd, &c, 1));
}

/**
 * @brief Print a number on a file descriptor.
 * 
 * @param n The number to print.
 * @param fd Where to print.
 * @return The numbers of charachter written.
 */
int	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (write (fd, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = n * -1;
		}
		if (n > 9)
		{
			i = ft_putnbr_fd(n / 10, fd);
		}
		return (i + ft_rite(n % 10 + '0', fd));
	}
}
