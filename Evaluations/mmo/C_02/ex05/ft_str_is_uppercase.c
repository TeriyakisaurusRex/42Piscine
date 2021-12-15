/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorriga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:40:28 by mmorriga          #+#    #+#             */
/*   Updated: 2021/12/09 14:39:15 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 65 || str[n] > 90)
			return (0);
		n++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	b = ft_str_is_uppercase("ADICXZ");
	printf("%d", b);
} */
