/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rspace.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: beduroul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/29 18:56:26 by beduroul     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/29 18:56:49 by beduroul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/libft.h"

void	rspace(int nb, char *str)
{
	int i;

	i = -1;
	while (++i < nb)
		ft_strcat(str, " ");
}
