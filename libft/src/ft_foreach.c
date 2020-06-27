/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_foreach.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: beduroul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/13 18:26:03 by beduroul     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/13 20:48:12 by beduroul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = -1;
	while (++i < length)
		(*f)(tab[i]);
}