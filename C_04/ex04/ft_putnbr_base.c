/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:45:33 by jthiele           #+#    #+#             */
/*   Updated: 2021/12/08 15:37:10 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, int length, char *base)
{
	if (nb >= length)
	{
		ft_putnbr((nb / length), length, base);
		ft_putnbr((nb % length), length, base);
	}
	else
		ft_putchar(base[nb]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		count;
	char	t;

	i = 0;
	count = 0;
	while (base[count])
	{
		count++;
	}
	ft_putnbr(nbr, count, base);
}
