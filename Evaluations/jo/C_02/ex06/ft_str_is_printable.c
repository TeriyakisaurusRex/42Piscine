/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimcuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:32:39 by jlimcuan          #+#    #+#             */
/*   Updated: 2021/12/07 17:35:17 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] > 126)
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
	char string[] = "this is printable";
	char nprint[] = "unprintable, \t (tab) ";

	printf("%s = %d\n", string, ft_str_is_printable(string));
	printf("%s = %d\n", nprint, ft_str_is_printable(nprint));
}*/
