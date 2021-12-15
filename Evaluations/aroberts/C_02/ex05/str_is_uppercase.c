/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_is_uppercase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:53:47 by aroberts          #+#    #+#             */
/*   Updated: 2021/12/14 13:19:13 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<unistd.h>
#include	<stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
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
char a[] = "QWERTYUIOP";
ret = ft_str_is_uppercase(a);
printf("%d\n", ret);
}
*/
