/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:01:25 by jthiele           #+#    #+#             */
/*   Updated: 2021/12/15 13:25:17 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*copy;

	i = 0;
	length = 0;
	while (src[length])
	{
		length++;
	}
	copy = (char *) malloc((length + 1) * sizeof(char));
	if (copy)
	{
		i = 0;
		while (src[i])
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
	}
	return (copy);
}
