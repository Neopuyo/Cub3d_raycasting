/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 07:22:05 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/15 10:09:08 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	init_data(t_data *data);

int	main(int argc, char **argv)
{
	t_data	data;

	init_data(&data);
	if (cub_pars(&data, argv, argc))
		return (data.err_code);
	game_loop(&data);
	free(data.file.all);
	ft_free_2d_array(data.file.map);
	free(data.txr.path[0]);
	free(data.txr.path[1]);
	free(data.txr.path[2]);
	free(data.txr.path[3]);
	free(data.txr.path[4]);
	mlx_destroy_image(data.mlx.ptr, data.txr.wall[0].img);
	mlx_destroy_image(data.mlx.ptr, data.txr.wall[1].img);
	mlx_destroy_image(data.mlx.ptr, data.txr.wall[2].img);
	mlx_destroy_image(data.mlx.ptr, data.txr.wall[3].img);
	if (data.txr.wall[4].img)
		mlx_destroy_image(data.mlx.ptr, data.txr.wall[4].img);
	mlx_destroy_image(data.mlx.ptr, data.n_image.img);
	mlx_destroy_window(data.mlx.ptr, data.mlx.win);
	mlx_destroy_display(data.mlx.ptr);
	free(data.mlx.ptr);
}

void	init_data(t_data *data)
{
	data->file.all = NULL;
	data->file.fd = 0;
	data->file.map = NULL;
	data->file.width = 0;
	data->file.length = -1;
	data->pc._x = 0;
	data->pc._y = 0;
	data->pc.start_face = '0';
	data->txr.plan[0].value = 0x00000000;
	data->txr.plan[1].value = 0x00000000;
	data->txr.path[0] = NULL;
	data->txr.path[1] = NULL;
	data->txr.path[2] = NULL;
	data->txr.path[3] = NULL;
	data->txr.path[4] = NULL;
	data->txr.wall[0].img = NULL;
	data->txr.wall[1].img = NULL;
	data->txr.wall[2].img = NULL;
	data->txr.wall[3].img = NULL;
	data->txr.wall[4].img = NULL;
	data->n_image.img = NULL;
	data->mlx.ptr = NULL;
	data->mlx.win = NULL;
	data->ghost = false;
	data->mouse_hide = false;
}
