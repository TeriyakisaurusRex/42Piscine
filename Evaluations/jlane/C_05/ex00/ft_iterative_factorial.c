/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:11:38 by jlane             #+#    #+#             */
/*   Updated: 2021/12/14 14:17:42 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}
/*
#include <stdio.h>

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%c! is %d\n", i + '0', ft_iterative_factorial(i));
		i++;
	}
	printf("(-1)! is %d\n", ft_iterative_factorial(-1));
	printf("(-2)! is %d\n", ft_iterative_factorial(-2));
}*/
