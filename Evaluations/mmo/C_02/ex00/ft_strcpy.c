/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorriga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:39:31 by mmorriga          #+#    #+#             */
/*   Updated: 2021/12/09 14:33:05 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (!(src[c]))
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char *string = "huuuuu93";
	char fee[80];
	printf ("Cooloo: %s\n", string);
	char *lee = ft_strcpy(&fee[0], &string[0]);
	printf ("lee: %s\n", lee);
}
*/
