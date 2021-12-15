/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:39:14 by jthiele           #+#    #+#             */
/*   Updated: 2021/12/15 13:25:47 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	array_count(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		k += count_string(strs[i]);
		i++;
	}
	while (sep[j])
		j++;
	return ((k) + (j * (size - 1)));
}

void	write_big_array(char *rtnstring, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			rtnstring[k] = strs[i][j++];
			k++;
		}
		j = 0;
		while (sep[j] && i != (size - 1))
		{
			rtnstring[k] = sep[j++];
			k++;
		}
		i++;
	}
	rtnstring[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rtnstring;

	rtnstring = NULL;
	if (size < 1)
	{
		rtnstring = malloc(sizeof(char) * 1);
		*rtnstring = '\0';
		return (rtnstring);
	}
	rtnstring = malloc(sizeof(char) * array_count(size, strs, sep));
	write_big_array(rtnstring, size, strs, sep);
	return (rtnstring);
}
