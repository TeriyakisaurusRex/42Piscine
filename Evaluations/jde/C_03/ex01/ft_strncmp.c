/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:15:26 by jde-mich          #+#    #+#             */
/*   Updated: 2021/12/14 15:18:03 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i] != '\0') && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
int main ()
{
	int strncmp;
	int n = 2;
	char a[] = "ab";
	char b[] = "caB";
	strncmp = ft_strncmp(a, b, n);
	printf("%d\n", strncmp);
	return (0);
}*/
