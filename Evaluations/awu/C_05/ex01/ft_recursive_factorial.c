/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                             :      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awu <awu@student.42adel.org.au>     +#+  +:+       +#+               */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 04:23:38 by awu           #+#    #+#                 */
/*   Updated: 2021/12/07 17:22:36 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
int main (void){
    int a;
    int ret;

    a = 4;
    ret = ft_recursive_factorial(a);
    printf("%d", ret);
}
