/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:20:16 by jde-mich          #+#    #+#             */
/*   Updated: 2021/12/14 15:17:45 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
int main (void)
{
	char *a = "Hello!";
	char *b = "Hello2!";
	char *c = "Hello3!";
	char *d = "Hello!";

	printf("Hello! == Hello2! : %d\n", ft_strcmp(a,b));
	printf("Hello! == Hello3! : %d\n", ft_strcmp(a,c));
	printf("Hello! == Hello! : %d\n", ft_strcmp(a,c));
	printf("Hello! == Hello! : %d\n", ft_strcmp(a,a));

	char a2[] = "Hello!";
	char d2[] = "Hello!";

	printf("Hello! == Hello! : %d\n", ft_strcmp(a2, d2));
	printf("Hello! == Hello! : %d\n", ft_strcmp(a2, a2));

	char a3 [] = "üHello!";
	char b3 [] = "Hello!";
	char d3 [] = "üHello!";

	printf("üHello! == Hello! : %d\n", ft_strcmp(a3, b3));
	printf("üHello! == üHello! : %d\n", ft_strcmp(a3, d3));
	printf("üHello! == üHello! : %d\n", ft_strcmp(a3, a3));
}*/
