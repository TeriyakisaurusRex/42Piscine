/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:06:36 by jde-mich          #+#    #+#             */
/*   Updated: 2021/12/14 15:19:27 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < nb && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char a2[12] = "Hello!";
	char d2[6] = "Hello!";

	printf("Hello!Hello! : %s\n", ft_strncat(a2, d2, 3));

	char a3[13] = "üHello!";
	char b3[] = "Hello!";
	char c3[14] = "üHello!";
	char d3[] = "Second";

	printf("üHello!Hello! : %s\n", ft_strncat(a3, b3, 4));
	printf("üHello!üHello! : %s\n", ft_strncat(c3, d3, 3));
}*/
