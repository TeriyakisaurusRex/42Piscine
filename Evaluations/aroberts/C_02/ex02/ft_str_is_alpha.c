/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:27:19 by aroberts          #+#    #+#             */
/*   Updated: 2021/12/14 11:43:12 by aroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<unistd.h>
#include	<stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
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
char a[] = "qwertyui6op";
ret = ft_str_is_alpha(a);
printf("%d\n", ret);
}
*/
