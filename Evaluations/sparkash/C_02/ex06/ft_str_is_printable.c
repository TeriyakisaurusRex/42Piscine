/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparkash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:44:21 by sparkash          #+#    #+#             */
/*   Updated: 2021/12/16 14:19:37 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	value;

	i = 0;
	value = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d", ft_str_is_printable("gfdgdf"));
	return (0);
}
*/
