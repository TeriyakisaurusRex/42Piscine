/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                                 :      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awu <awu@student.42adel.org.au>     +#+  +:+       +#+               */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 04:23:38 by awu           #+#    #+#                 */
/*   Updated: 2021/12/09 14:18:30 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
int main (void){
    int a;
    int ret;
    int b;

    b = 5;
    a = 2;
    ret = ft_recursive_power(a, b);
    printf("%d", ret);
}
