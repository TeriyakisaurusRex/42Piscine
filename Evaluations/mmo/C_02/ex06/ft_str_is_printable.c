/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorriga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:47:23 by mmorriga          #+#    #+#             */
/*   Updated: 2021/12/09 14:39:34 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 32 || str[n] > 126)
			return (0);
		n++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int b = ft_str_is_printable("	");
	printf("%d", b);
} */
