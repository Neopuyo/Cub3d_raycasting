/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 01:35:38 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 18:58:37 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterate over a string and apply a function to each character
 * and return a new string. (maloced)
 * 
 * @param str the string to iterate.
 * @param f the function to apply.
 * @return A pointer ot the new string or NULL if an error occured.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len_s;
	char			*str_ret;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	str_ret = malloc(sizeof(char) * len_s + 1);
	if (!str_ret)
		return (NULL);
	while (i < len_s)
	{
		str_ret[i] = f (i, s[i]);
		i++;
	}
	str_ret[len_s] = '\0';
	return (str_ret);
}
