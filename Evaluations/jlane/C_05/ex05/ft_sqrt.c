/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:18:14 by jlane             #+#    #+#             */
/*   Updated: 2021/12/14 14:23:52 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	odd;
	int	root;

	odd = 1;
	root = 0;
	while (nb > 0)
	{
		nb -= odd;
		odd += 2;
		root++;
	}
	if (nb == 0)
		return (root);
	else
		return (0);
}

int main()
{
	printf("%d\n", ft_sqrt(-125 * 125));
		return (0);
}
