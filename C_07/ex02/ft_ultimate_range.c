/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:22:21 by jthiele           #+#    #+#             */
/*   Updated: 2021/12/14 13:43:53 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*str_cpy;

	str_cpy = NULL;
	*range = NULL;
	i = 0;
	if (min < max)
	{
		*range = malloc(sizeof(**range) * (max - min));
		str_cpy = *range;
	}
	else
		return (0);
	while (min < max)
	{
		str_cpy[i] = min;
		min++;
		i++;
	}
	return (i);
}
