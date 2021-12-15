/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harobins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 04:40:43 by harobins          #+#    #+#             */
/*   Updated: 2021/12/10 13:50:57 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	switcheroo;

	temp = *a;
	*a = *b;
	*b = switcheroo;
}
/*
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	a = 3;
	b = 7;
	printf("before %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("after %d %d\n", a, b);
}*/
