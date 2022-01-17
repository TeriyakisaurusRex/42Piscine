/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlapidge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:03:47 by jlapidge          #+#    #+#             */
/*   Updated: 2021/12/09 13:29:40 by jlapidge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}