/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okafley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:10:47 by okafley           #+#    #+#             */
/*   Updated: 2021/12/13 17:30:14 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	i++;
	}
	return (dest);
}
/*
int	main(void)

{
	char	*string = "1234567890asdfghjklz";
	char	new [50];
	char *Copy = ft_strncpy(&new[0], &string[0], 10);
	printf("Destination = %s, Copy = %s", new, string);
}*/
