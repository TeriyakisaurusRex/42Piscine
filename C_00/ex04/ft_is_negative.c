/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:56:16 by jthiele           #+#    #+#             */
/*   Updated: 2021/11/25 14:08:38 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
	{
		c = 78;
		write(1, &c, 1);
	}
	else
	{
		c = 80;
		write(1, &c, 1);
	}
}
