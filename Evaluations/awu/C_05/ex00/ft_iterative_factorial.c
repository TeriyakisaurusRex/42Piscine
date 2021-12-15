/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                             :      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awu <awu@student.42adel.org.au>     +#+  +:+       +#+               */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 04:23:38 by awu           #+#    #+#                 */
/*   Updated: 2021/12/09 13:37:42 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	tmp;

	tmp = nb;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	while (tmp > 1)
	{
		nb = nb * (tmp - 1);
		tmp--;
	}
	return (nb);
}
int main (void){
    int a;
    int ret;

    a = 0;
    ret = ft_iterative_factorial(a);
    printf("%d", ret);
}
