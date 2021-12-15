/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorriga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:26:07 by mmorriga          #+#    #+#             */
/*   Updated: 2021/12/09 14:40:15 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 97 && str[n] <= 122)
			str[n] -= 32;
		n++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "I will become uppercase";
	printf("%s", ft_strupcase(string));
} */
