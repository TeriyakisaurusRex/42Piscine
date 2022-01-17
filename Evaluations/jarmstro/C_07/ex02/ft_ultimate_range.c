/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:21:58 by jarmstro          #+#    #+#             */
/*   Updated: 2021/12/16 12:40:16 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;	

	i = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	*range = malloc (sizeof (**range) * (max - min));
	if (!(*range))
		return (-1);
	while (i < (max - min))
	{
		*(*range + i) = min + i;
		i++;
	}
	return (max - min);
}
