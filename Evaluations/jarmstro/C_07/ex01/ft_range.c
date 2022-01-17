/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:21:58 by jarmstro          #+#    #+#             */
/*   Updated: 2021/12/16 12:38:16 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*iarr;
	int	i;

	i = 0;
	if (max <= min)
		return (0);
	iarr = malloc (sizeof (*iarr) * (max - min));
	while (i < (max - min))
	{
		iarr[i] = min + i;
		i++;
	}
	return (iarr);
}
