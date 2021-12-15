/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:56:28 by pwhittin          #+#    #+#             */
/*   Updated: 2021/12/09 12:46:42 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i]) != '\0' || (s2[i] != '\0'))
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
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("let's", "see"));
	printf("%d\n", ft_strcmp("same","same"));
	printf("%d\n", ft_strcmp("not","notbad"));
}*/
