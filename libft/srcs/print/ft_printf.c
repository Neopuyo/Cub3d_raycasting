/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:20:31 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 17:51:36 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_convertbase_x(unsigned int nb, int size);
static int	ft_convertbase_p(unsigned long long int nb, int iteration);
static int	ft_trie(va_list ap, char type);

/**
 * @brief A recration of the printf function. --- 
 * Take %s %c %d %i %u %x %X %p %% flags.
 * 
 * @param format The string to be printed.
 * @param ... the arguments to be printed.
 * @return the numbers of characters printed.
 */
int	ft_printf(const char *format, ...)
{
	int		ret;
	va_list	ap;

	ret = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
		{
			ret++;
			write (1, format, 1);
			format++;
		}
		else if (format[1] != 'c' && format[1] != 's' && format[1] != 'p'
			&& format[1] != 'x' && format[1] != 'X' && format[1] != '%'
			&& format[1] != 'd' && format[1] != 'i' && format[1] != 'u')
			format++;
		else
		{
			ret += ft_trie(ap, (char)format[1]);
			format += 2;
		}
	}
	va_end(ap);
	return (ret);
}

static int	ft_convertbase_x(unsigned int nb, int size)
{
	int	i;

	i = 0;
	if (size == LOW)
	{
		if (nb >= (unsigned int)ft_strlen(BASE_HEXA_LOW))
			ft_convertbase_x(nb / ft_strlen(BASE_HEXA_LOW), UP);
		return (i +(write(1, &BASE_HEXA_LOW[nb % 16], 1)));
	}
	else if (size == UP)
	{
		if (nb >= (unsigned int)ft_strlen(BASE_HEXA_UP))
			ft_convertbase_x(nb / ft_strlen(BASE_HEXA_UP), UP);
		return (i +(write(1, &BASE_HEXA_UP[nb % 16], 1)));
	}
	return (0);
}

static int	ft_convertbase_p(unsigned long long int nb, int iteration)
{
	int	i;

	i = 0;
	if (iteration == 0)
		i = write (1, "0x", 2);
	if (nb >= (unsigned long long int)ft_strlen(BASE_HEXA_LOW))
		ft_convertbase_p(nb / ft_strlen(BASE_HEXA_LOW), 1);
	return (i +(write(1, &BASE_HEXA_LOW[nb % 16], 1)));
}

static int	ft_trie(va_list ap, char type)
{
	int	ret;

	ret = 1;
	if (type == 's')
		ret = ft_putstr_fd(va_arg(ap, char *), 1);
	else if (type == 'c')
		ret = ft_putchar_fd(va_arg(ap, int), 1);
	else if (type == 'd' || type == 'i')
		ret = ft_putnbr_fd(va_arg(ap, int), 1);
	else if (type == 'u')
		ret = ft_put_unnbr_fd(va_arg(ap, unsigned int), 1);
	else if (type == 'x')
		ret = ft_convertbase_x(va_arg(ap, unsigned int), LOW);
	else if (type == 'X')
		ret = ft_convertbase_x(va_arg(ap, unsigned int), UP);
	else if (type == 'p')
		ret = ft_convertbase_p(va_arg(ap, unsigned long long int), 0);
	else if (type == '%')
		write (1, "%%", 1);
	else
		return (0);
	return (ret);
}
