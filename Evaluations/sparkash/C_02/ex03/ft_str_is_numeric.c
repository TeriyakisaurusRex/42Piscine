/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparkash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:23:06 by sparkash          #+#    #+#             */
/*   Updated: 2021/12/16 14:19:11 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	value;

	i = 0;
	value = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			value = 0;
			i++;
		}
	}
	return (value);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_str_is_numeric(""));
	return (0);
}
*/
