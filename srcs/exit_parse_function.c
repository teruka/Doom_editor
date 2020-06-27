/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_parse_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Polcito <Polcito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 15:50:13 by Polcito           #+#    #+#             */
/*   Updated: 2020/06/27 15:50:14 by Polcito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_editor.h"

void		parse_skybox(t_file *file, int fd)
{
	ft_putstr_fd("Skybox\n\ttexture = ", fd);
	if (file->state.skybox == 0 || file->state.skybox == 1)
		ft_putstr_fd("skybox.xpm\n\n", fd);
	if (file->state.skybox == 2)
		ft_putstr_fd("crepuscule.xpm\n\n", fd);
	if (file->state.skybox == 3)
		ft_putstr_fd("nuit.xpm\n\n", fd);
}

void		choose_textures_floor(t_file *file, int fd, int x, int y)
{
	if (file->tab[y][x].floor_state == 1)
		ft_putstr_fd("\n\ttexture = wood.xpm\n}\n\n", fd);
	if (file->tab[y][x].floor_state == 2)
		ft_putstr_fd("\n\ttexture = blue.xpm\n}\n\n", fd);
	if (file->tab[y][x].floor_state == 3)
		ft_putstr_fd("\n\ttexture = green.xpm\n}\n\n", fd);
	if (file->tab[y][x].floor_state == 4)
		ft_putstr_fd("\n\ttexture = wood2.xpm\n}\n\n", fd);
}

void		choose_textures_wall(t_file *file, int fd, int x, int y)
{
	if (file->tab[y][x].tab_state == 3)
		ft_putstr_fd("\n\ttexture = t4.xpm\n}\n\n", fd);
	if (file->tab[y][x].tab_state == 5)
		ft_putstr_fd("\n\ttexture = text2.xpm\n}\n\n", fd);
	if (file->tab[y][x].tab_state == 6)
		ft_putstr_fd("\n\ttexture = text3.xpm\n}\n\n", fd);
	if (file->tab[y][x].tab_state == 8)
		ft_putstr_fd("\n\ttexture = text4.xpm\n}\n\n", fd);
	if (file->tab[y][x].tab_state == 11)
		ft_putstr_fd("\n\ttexture = text5.xpm\n}\n\n", fd);
	if (file->tab[y][x].tab_state == 12)
		ft_putstr_fd("\n\ttexture = text6.xpm\n}\n\n", fd);
	if (file->tab[y][x].tab_state == 13)
		ft_putstr_fd("\n\ttexture = text7.xpm\n}\n\n", fd);
	if (file->tab[y][x].tab_state == 14)
		ft_putstr_fd("\n\ttexture = text8.xpm\n}\n\n", fd);
}

void		choose_objects_file(t_file *file, int fd, int x, int y)
{
	if (file->tab[y][x].tab_state == 16)
		ft_putstr_fd("\n\tfile = end.obj\n}\n", fd);
	if (file->tab[y][x].tab_state == 17)
		ft_putstr_fd("\n\tfile = potion_soin.obj\n}\n", fd);
	if (file->tab[y][x].tab_state == 18)
		ft_putstr_fd("\n\tfile = potion_mana.obj\n}\n", fd);
	if (file->tab[y][x].tab_state == 19)
		ft_putstr_fd("\n\tfile = key.obj\n}\n", fd);
	if (file->tab[y][x].tab_state == 20)
		ft_putstr_fd("\n\tfile = munition.obj\n}\n", fd);
}
