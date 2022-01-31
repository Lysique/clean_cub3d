/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_hook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuytters <tuytters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:06:23 by tamighi           #+#    #+#             */
/*   Updated: 2022/01/31 11:33:48 by tuytters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOOP_HOOK_H
# define LOOP_HOOK_H

# include "global.h"

		/* COLLISION WITH WALLS */

# define HITBOX 0.3

void	display(t_cub *cub);
void	key_manager(t_cub *cub);
void	key_init(t_cub *cub);
void	key_w(t_cub *cub);
void	key_s(t_cub *cub);
void	key_a(t_cub *cub);
void	key_d(t_cub *cub);
void	hitbox(float x, float y, t_cub *cub);

#endif
