/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimcuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:16:54 by jlimcuan          #+#    #+#             */
/*   Updated: 2021/12/05 16:26:47 by jlimcuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main (void)
{
	char up[] = "UPPERONE";
	char low[] = "lowerzero";
	char emp[] = "";
	printf("%s = %d\n", up, ft_str_is_uppercase(up));
	printf("%s = %d\n", low, ft_str_is_uppercase(low));
	printf("Empty = %d\n", ft_str_is_uppercase(emp));
}*/
