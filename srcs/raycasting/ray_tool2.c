/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_tool2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 08:02:47 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/15 11:50:47 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_tile	ft_what_tile(int x, int y, t_data *d)
{
	if (map_in_bound(x, y, d))
	{
		if (d->file.map[y][x] == '1')
			return (WALL);
		if (d->file.map[y][x] == 'C')
			return (C_DOOR);
		if (d->file.map[y][x] == 'O')
			return (O_DOOR);
	}
	return (VOID);
}

int	ft_inf_wall(t_rayc *r, t_data *d)
{
	if (r->hit == true)
		return (0);
	if (r->dir.y < 0 && r->map.y < 0)
		return (r->inf = true, 0);
	if (r->dir.x < 0 && r->map.x < 0)
		return (r->inf = true, 0);
	if (r->dir.y > 0 && r->map.y > d->file.length)
		return (r->inf = true, 0);
	if (r->dir.x > 0 && r->map.x > d->file.width)
		return (r->inf = true, 0);
	return (1);
}

void	toogle_bool(bool *boolean)
{
	if (*boolean == true)
		*boolean = false;
	else
		*boolean = true;
}
