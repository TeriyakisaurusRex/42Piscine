/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:27:19 by aroberts          #+#    #+#             */
/*   Updated: 2021/12/14 11:48:45 by aroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<unistd.h>
#include	<stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
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
char a[] = "1234567890";
ret = ft_str_is_numeric(a);
printf("%d\n", ret);
}
*/
