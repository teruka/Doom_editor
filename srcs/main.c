/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Polcito <Polcito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 15:48:55 by Polcito           #+#    #+#             */
/*   Updated: 2020/06/27 15:49:03 by Polcito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_editor.h"

int		out(void *param)
{
	(void)param;
	exit(0);
	return (0);
}

int		loop(t_file *file)
{
	int i;
	int j;

	i = 0;
	j = 0;
	mlx_put_image_to_window(file->mlx_ptr, file->win_ptr, file->ptr_img, 0, 0);
	init_hud_bis(file);
	texture_images_init(file);
	edit_z(file);
	while (j < 43)
	{
		i = 0;
		while (i < 49)
		{
			check_floor(file, file->tab[j][i].floor_state, i, j);
			check_state_int(file, i, j);
			i++;
		}
		j++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	t_file	*file;

	(void)**av;
	file = malloc(sizeof(t_file));
	if (ac > 1)
		return (write(1, "wrong usage\n", 12));
	display_window(file);
	init_tab(file);
	mlx_hook(file->win_ptr, 2, 0, deal_key, file);
	mlx_hook(file->win_ptr, 4, 0, mouse_press, file);
	mlx_hook(file->win_ptr, 6, 0, mouse_move, file);
	mlx_hook(file->win_ptr, 17, 0, out, file);
	mlx_loop_hook(file->mlx_ptr, loop, file);
	mlx_loop(file->mlx_ptr);
	return (0);
}
