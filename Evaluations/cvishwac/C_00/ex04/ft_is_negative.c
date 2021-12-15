/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvishwac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:13:19 by cvishwac          #+#    #+#             */
/*   Updated: 2021/12/07 13:55:18 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int number)

{
	if (number > 0)
		write(1, "p", 1);
	else
		write(1, "N", 1);
}

int	main(void)
{	
	ft_is_negative(0);
	return (0);
}
