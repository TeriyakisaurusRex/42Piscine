/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidhu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:12:09 by msidhu            #+#    #+#             */
/*   Updated: 2021/12/01 14:04:38 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)

{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else if (n > 0)
	{	
		write(1, "P", 1);
	}
}
