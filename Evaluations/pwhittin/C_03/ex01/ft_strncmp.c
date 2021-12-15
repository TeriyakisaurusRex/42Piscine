/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:30:51 by pwhittin          #+#    #+#             */
/*   Updated: 2021/12/09 12:48:47 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (!*s1 || !*s2)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	int	n = 5;

	char string01[] = "meet";
	char string02[] = "meetme";
	char string03[] = "meat";	

	printf("-[ft_strncmp]----------\n");
	printf("%d\n", ft_strncmp(string01, string02, n));
	printf("%d\n", ft_strncmp(string01, string03, n));
	printf("%d\n", ft_strncmp(string03, string03, n));
	printf("%d\n", ft_strncmp(string02, string01, n));
	printf("-[strncmp]--------------\n");
	printf("%d\n", strncmp(string01, string02, n));
	printf("%d\n", strncmp(string01, string03, n));
	printf("%d\n", strncmp(string03, string03, n));
	printf("%d\n", strncmp(string02, string01, n));
	printf("------------------------\n");
}*/
