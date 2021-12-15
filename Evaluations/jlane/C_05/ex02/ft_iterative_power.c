/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:29:54 by jlane             #+#    #+#             */
/*   Updated: 2021/12/14 14:19:32 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	result = nb;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result = nb * result;
		--power;
	}
	return (result);
}

int main()
{
	printf("%d\n", ft_iterative_power(-2, 4));
	return (0);
}
