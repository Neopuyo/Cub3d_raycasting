/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 07:05:48 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 14:12:58 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	if (!lst || !f)
		return ;
	temp2 = lst;
	temp = lst;
	while (temp)
	{
		temp2 = temp;
		temp = temp -> next;
		f(temp2 -> content);
	}
}
