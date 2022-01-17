/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:48:34 by jting             #+#    #+#             */
/*   Updated: 2021/12/18 14:03:31 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == 0)
	{
		return (0);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int main()
{
	int min = 5;
	int max = 100;
	int i = 0;
	int *array = ft_range(min, max);
	while (array[i])
	{
	printf("%d\n", array[i]);
	i++;
	}
}
*/
