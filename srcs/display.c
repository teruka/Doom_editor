/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Polcito <Polcito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 15:48:49 by Polcito           #+#    #+#             */
/*   Updated: 2020/06/27 15:49:06 by Polcito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_editor.h"

void	display_window(t_file *file)
{
	file->mlx_ptr = mlx_init();
	file->win_ptr = mlx_new_window(file->mlx_ptr, WIDTH, HEIGHT, "Doom editor");
	file->ptr_img = mlx_new_image(file->mlx_ptr, WIDTH, HEIGHT);
	file->my_str_img = mlx_get_data_addr(file->ptr_img, &(file->bpp),
										&(file->s_l), &(file->endian));
	init_hud(file);
	init_tab_texture(file);
	button_clear_save(file);
	mlx_put_image_to_window(file->mlx_ptr, file->win_ptr, file->ptr_img, 0, 0);
}
