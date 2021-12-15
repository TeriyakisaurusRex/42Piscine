/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorriga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:08:40 by mmorriga          #+#    #+#             */
/*   Updated: 2021/12/09 14:39:02 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 48 || str[n] > 57)
			return (0);
		n++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int b = ft_str_is_numeric("oeri923");
	printf("%d", b);
} */
