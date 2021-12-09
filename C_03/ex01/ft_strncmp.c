/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:56:37 by jthiele           #+#    #+#             */
/*   Updated: 2021/12/07 17:25:05 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		while (s1[i] && s2[i])
		{
			if (s1[i] > s2[i])
				return (1);
			else if (s1[i] < s2[i])
				return (-1);
			i++;
		}
		if (!s1[i] && !s2[i])
			return (0);
		else if (s1[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	char *string = "string";
	char *string2 = "stringing";

	printf("%d", ft_strncmp(string, string2);
}

