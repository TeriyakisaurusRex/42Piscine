/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:35:35 by tford             #+#    #+#             */
/*   Updated: 2021/11/30 13:26:45 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_hold;

	a_hold = *a;
	*a = a_hold / *b;
	*b = a_hold % *b;
}

int main()
{
	int a;
	int b;
	a = 22;
	b = 7;
	printf("%d / %d = ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d, with %d remaining\n", a, b);
}
