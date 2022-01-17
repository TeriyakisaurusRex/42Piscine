/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:35:26 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/16 16:50:03 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_interative_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		nb *= a;
		power--;
	}
	return (nb);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_interative_power(-5, 3));
}
