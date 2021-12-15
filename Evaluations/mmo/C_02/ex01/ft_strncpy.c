/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorriga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:11:31 by mmorriga          #+#    #+#             */
/*   Updated: 2021/12/09 14:37:15 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

		c = 0;
	while ((src[c] != '\0'))
	{
		dest[c] = src[c];
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "string";
	char dest[] = "fire";
   printf("%s" , strncpy(dest, src, 3));
} 
