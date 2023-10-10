/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:44:55 by amiguez           #+#    #+#             */
/*   Updated: 2023/01/16 20:10:19 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Return a substring of a string.
 * 
 * @param s the string to cut.
 * @param start the index of the first character to cut.
 * @param len the length of the substring.
 * @return the substring -- "" if the substring is out of bounds -- NULL if error
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;
	size_t			len_malloc;

	if (!s)
		return (0);
	if (start >= (unsigned int) ft_strlen(s))
		return (ft_strdup(""));
	len_malloc = ft_strlen(s + start);
	if (len_malloc >= len)
		len_malloc = len;
	ret = malloc((len_malloc + 1) * sizeof(*ret));
	if (!ret)
		return (0);
	i = 0;
	while (len && s[start + i])
	{
		ret[i] = s[start + i];
		i++;
		len--;
	}
	ret[i] = 0;
	return (ret);
}
