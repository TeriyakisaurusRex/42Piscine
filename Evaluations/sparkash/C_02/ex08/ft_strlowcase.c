/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparkash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:29:46 by sparkash          #+#    #+#             */
/*   Updated: 2021/12/16 14:20:21 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "FDSFSddsfsfdsfsdaFDF";
	printf("%s", ft_strlowcase(string));
	return (0);
}
*/
