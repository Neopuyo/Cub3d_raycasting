/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:33:00 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 19:00:43 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Find the first occurence of a substring in a string.
 * 
 * @param haystack the string to search in.
 * @param needle the substring to search.
 * @param len Number of bytes to compare.
 * @return the pointer to the first occurence of to_find in str.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long int	i;
	unsigned long int	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (len > i && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len > i + j
			&& needle[j] && haystack[i + j])
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
