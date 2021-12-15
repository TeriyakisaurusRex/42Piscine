/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_is_printable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:56:53 by aroberts          #+#    #+#             */
/*   Updated: 2021/12/14 12:08:43 by aroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<unistd.h>
#include	<stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
		|| (str[i] >= 97 && str[i] <= 122))
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
int	ret;
char a[] = "24";
ret = ft_str_is_printable(a);
printf("%d\n", ret);
}
*/
