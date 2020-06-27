/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_intsize.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: beduroul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 18:40:10 by beduroul     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 18:43:50 by beduroul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_intsize(int n)
{
	int res;

	res = 0;
	if (n <= 0)
		res++;
	while (n)
	{
		n /= 10;
		res++;
	}
	return (res);
}
