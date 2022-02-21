/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuytters <tuytters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:46:06 by tamighi           #+#    #+#             */
/*   Updated: 2022/02/14 11:20:05 by tuytters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

void	cub3d(char *argument)
{
	t_cub		cub;

	structure_init(&cub);
	parser(argument, &cub);
	mlx_hook(cub.mlx.win, 2, 0, key_press, (void *)&cub);
	mlx_hook(cub.mlx.win, 3, 0, key_release, (void *)&cub);
	mlx_hook(cub.mlx.win, 4, 0, mouse_click, (void *)&cub);
	mlx_hook(cub.mlx.win, 5, 0, mouse_release, (void *)&cub);
	mlx_hook(cub.mlx.win, 6, 0, mouse_move, (void *)&cub);
	mlx_hook(cub.mlx.win, 17, 0, mouse_press, (void *)&cub);
	mlx_loop_hook(cub.mlx.mlx, loop_hook, &cub);
	mlx_loop(cub.mlx.mlx);
}
