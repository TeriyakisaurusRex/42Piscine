/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimcuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:21:11 by jlimcuan          #+#    #+#             */
/*   Updated: 2021/12/06 19:04:07 by jlimcuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] > 0)
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/*
int main(void)
{
	char a[] = "string";
	char b[] = "numerical123";
	char c[] = "";

	printf("%s = %d\n", a, ft_str_is_alpha(a));
	printf("%s = %d\n", b, ft_str_is_alpha(b));

}*/
