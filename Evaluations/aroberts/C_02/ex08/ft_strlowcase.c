/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:27:45 by aroberts          #+#    #+#             */
/*   Updated: 2021/12/14 13:19:57 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<unistd.h>
#include	<stdio.h>
*/
char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
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
ft_strlowcase(a);
printf("%s\n", a);
return (0);
}
*/
