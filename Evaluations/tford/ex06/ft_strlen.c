/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:32:28 by tford             #+#    #+#             */
/*   Updated: 2021/11/30 13:31:49 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++ != 0)
	{
		length++;
	}
	return (length);
}

int main(void)
{
	int i;
	i = ft_strlen("TenLetters");
	printf("string is %d characters long", i);
}
