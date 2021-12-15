/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okafley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:02:17 by okafley           #+#    #+#             */
/*   Updated: 2021/12/13 17:29:49 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)

{
	int	z;

	z = 0;
	while (src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	dest [z] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*string;

	string = "123456789qwertyuiop";
	char new [50];

	char	*copy = ft_strcpy(&new[0], &string[0]);
	printf("Original = %s, Copy = %s", string, copy);
}*/
