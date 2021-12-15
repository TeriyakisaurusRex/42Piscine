/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorriga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:55:30 by mmorriga          #+#    #+#             */
/*   Updated: 2021/12/09 14:40:23 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 65 && str[n] <= 90)
			str[n] = str[n] + 32;
		n++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char string[] = "I'm GOING to BE lowerCASE";
	printf("%s", ft_strlowcase(string));
} */
