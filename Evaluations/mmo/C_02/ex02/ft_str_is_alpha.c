/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorriga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:33:06 by mmorriga          #+#    #+#             */
/*   Updated: 2021/12/09 14:38:53 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] < 65 || str[n] > 90) && (str[n] < 97 || str[n] > 122))
			return (0);
		n++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{

	int b = ft_str_is_alpha("");
	printf("%d", b);
}
*/
