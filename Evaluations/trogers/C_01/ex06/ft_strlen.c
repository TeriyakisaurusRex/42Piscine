/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trogers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:41:16 by trogers           #+#    #+#             */
/*   Updated: 2021/12/18 13:21:21 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
