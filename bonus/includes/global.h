/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuytters <tuytters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:48:28 by tamighi           #+#    #+#             */
/*   Updated: 2022/02/19 14:49:34 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBAL_H
# define GLOBAL_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <math.h>
# include "../mlx/mlx.h"
# include <stdarg.h>
# include "define.h"
# include <sys/time.h>

typedef unsigned int	t_time;

typedef struct s_img {
	void	*img;
	char	*addr;
	int		 bpp;
	int		sizel;
	int		endian;
	int		w;
	int		h;
}				t_img;

typedef struct s_key {
	int	w;
	int	s;
	int	a;
	int	d;
	int	right;
	int	left;
	int	door_p;
	int	door_r;
	int	shoot_p;
	int	shoot_r;
	int	reload;
	int	swap_gun;
}				t_key;

typedef struct s_mouse {
	int	x;
}				t_mouse;

typedef struct s_mlx {
	void	*mlx;
	void	*win;
}				t_mlx;

typedef struct s_spr {
	float	sprite_x;
	float	sprite_y;
	float	invdet;
	float	transf_x;
	float	transf_y;
	int		sprite_screen_x;
	int		sprite_height;
	int		sprite_width;
	int		tex_x;
	int		tex_y;
	int		draw_start;
	int		draw_end;
	int		d;
	t_img	tex;
}				t_spr;

typedef struct s_en {
	float	x;
	float	y;
	float	hbox;
	float	angle;
	int		sprite;
	int		nb_sprites;
	int		nb_runspr;
	int		type;
	int		action;
	int		life;
	t_time	time;
	t_img	img;
	t_spr	s;
}				t_en;

typedef struct s_player {
	float	x;
	float	y;
	float	angle;
}				t_player;

typedef struct s_door {
	int		y;
	int		x;
	int		open;
	int		is_moving;
	int		sprite;
	int		nb_sprites;
	t_time	time;
}				t_door;

typedef struct s_gun {
	int		sprite;
	int		status;
	int		nb_spr_shoot;
	int		nb_sprites;
	int		max_bullets;
	int		bullets;
	t_time	time;
}				t_gun;

typedef struct s_cub {
	char		**map;
	int			gun_type;
	int			action;
	t_player	player;
	t_en		*en;
	t_door		*doors;
	t_gun		gun[2];
	t_key		key;
	t_mouse		mouse;
	t_time		time;
	t_img		display;
	t_img		sprites[NB_SPR][MAX_SPR + 1];
	t_img		textures[7];
	t_mlx		mlx;
}				t_cub;

void		my_write(char *str);
void		wr_and_ex(char *str, int ex);

t_cub		*set_cubptr(t_cub *ptr);
void		error_manager(int error);

int			ft_strlen(const char *s);
t_time		get_time(void);
t_time		get_microtime(void);

void		free_my_arr(char **arr);
void		free_and_exit(t_cub *cub, int error);

int			is_close_char(char c);
int			get_door_index(t_door *door, int y, int x);

#endif
