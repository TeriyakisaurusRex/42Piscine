/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trogers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:08:56 by trogers           #+#    #+#             */
/*   Updated: 2021/12/18 13:18:01 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
