/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvishwac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 23:13:08 by cvishwac          #+#    #+#             */
/*   Updated: 2021/12/07 13:53:09 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	b;
	int	y;

	b = 48;
	y = '9';
	while (b <= y)
	{
		write(1, &b, 1);
		b++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
