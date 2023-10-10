/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_vector.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumarti <loumarti@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:28:24 by loumarti          #+#    #+#             */
/*   Updated: 2023/03/13 08:27:16 by loumarti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef D_VECTOR_H
# define D_VECTOR_H

typedef struct s_dvect {
	double	x;
	double	y;

}			t_dvect;

t_dvect	init_dvect(double x, double y);
void	rotation_matrix(t_dvect *dir, double rot);

#endif