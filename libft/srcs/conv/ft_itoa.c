/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:37:53 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 17:58:41 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_nb(long int n);
static void	ft_add_minus(char *ret, int size);
static void	ft_fill(int long k, int num_in_n, char *str_n);

/**
 * @brief Return a Malloced char* version of the int
 * 
 * @param n The int to convert
 * @return n in char* or NULL if error
 */
char	*ft_itoa(int n)
{
	char		*str_n;
	int			num_in_n;
	int			neg;
	long int	k;

	k = n;
	neg = 0;
	if (n < 0)
		neg = 1;
	if (n < 0)
		k = k * -1;
	num_in_n = ft_count_nb(k);
	str_n = malloc (sizeof(char) * (num_in_n + neg + 1));
	if (!str_n)
		return (NULL);
	str_n[num_in_n + neg] = '\0';
	ft_fill(k, num_in_n, str_n);
	if (neg)
		ft_add_minus(str_n, num_in_n);
	return (str_n);
}

static int	ft_count_nb(long int n)
{
	int	i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_add_minus(char *ret, int size)
{
	int		i;
	char	swap;
	char	paws;

	swap = ret[0];
	ret[0] = '-';
	i = 1;
	while (i < size)
	{
		paws = ret[i];
		ret[i] = swap;
		swap = paws;
		i++;
	}
	ret[i] = swap;
}

static void	ft_fill(int long k, int num_in_n, char *str_n)
{
	while (num_in_n)
	{
		num_in_n--;
		str_n[num_in_n] = (k % 10) + 48;
		k = k / 10;
	}
}
