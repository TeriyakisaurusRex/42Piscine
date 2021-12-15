/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:05:56 by jde-mich          #+#    #+#             */
/*   Updated: 2021/12/14 15:18:41 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		a++;
	}
	while (src[a] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
/*
int main ()
{
	char src[50], dest[50];

	strcpy(src, "This is source");
	strcpy(dest, "This is destination");

	strcat(dest, src);

	printf("Final destination string: %s", dest);

	return (0);
}*/
