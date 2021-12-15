/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhosn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:06:25 by nhosn             #+#    #+#             */
/*   Updated: 2021/12/11 15:49:06 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void) 
{
	int a = 7;
	int b = 8;
	int *div = &a;
	int *mod = &b; 
	ft_div_mod(a, b, div, mod);	
}
*/
