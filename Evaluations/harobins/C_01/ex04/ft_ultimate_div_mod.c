/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harobins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:08:23 by harobins          #+#    #+#             */
/*   Updated: 2021/12/10 13:52:49 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
  int a;
  int b;
  a = 22;
  b = 7;
  printf("%d / %d = ", a, b);
  ft_ultimate_div_mod(&a, &b);
  printf("%d, with %d remaining\n", a, b);
}*/
