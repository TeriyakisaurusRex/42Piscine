/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlapidge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:19:57 by jlapidge          #+#    #+#             */
/*   Updated: 2021/12/09 14:48:12 by jlapidge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
/*
#include<stdio.h>
int	main()
{
	char a[] = "BeingChilling";
	printf("%d\n", ft_strlen(a));
	return (0);
}
*/
