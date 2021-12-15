/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:11:07 by aroberts          #+#    #+#             */
/*   Updated: 2021/12/14 13:19:47 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<unistd.h>
#include	<stdio.h>
*/
char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
char a[] = "QWERTyuiop";
printf("%s\n", a);
ft_strupcase(a);
printf("%s\n", a);
return (0);
}
*/
