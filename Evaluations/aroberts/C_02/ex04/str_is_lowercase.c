/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_is_lowercase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:50:49 by aroberts          #+#    #+#             */
/*   Updated: 2021/12/14 13:19:08 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<unistd.h>
#include	<stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
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
char a[] = "qwertyuiop";
ret = ft_str_is_lowercase(a);
printf("%d\n", ret);
}
*/
