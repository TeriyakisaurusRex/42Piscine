/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:56:42 by jthiele           #+#    #+#             */
/*   Updated: 2021/12/07 11:36:49 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (!to_find[j])
				return (&str[i - j + 1]);
		}
		else if (j != 0)
		{
			j = 0;
		}
		i++;
	}
	return (NULL);
}
