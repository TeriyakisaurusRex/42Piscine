/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:12:14 by jbrown            #+#    #+#             */
/*   Updated: 2021/12/18 13:37:48 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < nb && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	char			str[100];
	unsigned int	i;

	i = 5;
	ft_strncat(str, argv[1], i);
	ft_strncat(str, argv[2], i);
	printf("%s", str);
	return (0);
}*/
