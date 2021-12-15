/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorriga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:29:58 by mmorriga          #+#    #+#             */
/*   Updated: 2021/12/09 14:39:09 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 97 || str[n] > 122)
			return (0);
		n++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int b = ft_str_is_lowercase("reerei");
	printf("%d", b);
} */
