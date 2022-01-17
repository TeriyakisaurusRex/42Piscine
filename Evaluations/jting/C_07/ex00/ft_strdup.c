/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:35:02 by jting             #+#    #+#             */
/*   Updated: 2021/12/18 14:02:54 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*str_cpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dest = malloc(sizeof(src) * (i));
	str_cpy (dest, src);
	return (dest);
}
/*
#include <stdio.h>
#include <strings.h>
int	main(void)
{
	char *string = "12345678901234qwertyuiopasdfghjklzxcvbnm1234567890";
	char new[60];
	printf("Source length is %lu\n", strlen(string));
	printf("Dest'n length is %lu\n", strlen(new));
	printf("Original: %s\n", string);
	printf("Address:  %p\n", string);
	char *copy = ft_strdup(string);
	printf("Copy:     %s\n", copy);
	printf("Address:  %p\n", copy);
	char *str = ft_strdup("");
	printf("Copy of nothing: %s\n", str);
}
*/
