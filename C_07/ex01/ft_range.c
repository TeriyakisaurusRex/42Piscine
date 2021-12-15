/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:57:51 by jthiele           #+#    #+#             */
/*   Updated: 2021/12/13 17:44:17 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rtn;
	int	i;

	rtn = NULL;
	i = 0;
	if (min < max)
		rtn = (int *)malloc((max - min) * sizeof(int));
	else
		return (rtn);
	while (min < max)
	{
		rtn[i] = min;
		min++;
		i++;
	}
	return (rtn);
}
