/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 09:17:49 by tamighi           #+#    #+#             */
/*   Updated: 2022/01/03 15:53:18 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/display.h"

void	display(t_cub *cub)
{
	ray_casting(cub);
	display_map(cub);
	display_char(cub);
	mlx_put_image_to_window(cub->mlx.mlx, cub->mlx.win,
		cub->display.img, 0, WIN_H - MINI);
}
