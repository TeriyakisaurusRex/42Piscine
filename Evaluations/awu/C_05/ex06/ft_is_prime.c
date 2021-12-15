/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                        :      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awu <awu@student.42adel.org.au>     +#+  +:+       +#+               */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 04:23:38 by awu           #+#    #+#                 */
/*   Updated: 2021/12/07 17:20:02 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	tmp;

	i = 1;
	while (i < (nb - 1))
	{
		i++;
		tmp = nb % i;
		if (tmp == 0)
			return (0);
	}
	return (1);
}
int main (void){
    int ret;
    int b;

    b = 2137433333;
    ret = ft_is_prime(b);
    printf("%d", ret);
}
