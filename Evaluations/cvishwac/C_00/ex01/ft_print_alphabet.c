/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvishwac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:58:24 by cvishwac          #+#    #+#             */
/*   Updated: 2021/12/07 13:48:46 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	yeet;

	yeet = 'a';
	while (yeet <= 'z')
	{
		write (1, &yeet, 1);
		yeet++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
