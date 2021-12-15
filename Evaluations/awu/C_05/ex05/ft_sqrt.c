/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                            :      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awu <awu@student.42adel.org.au>     +#+  +:+       +#+               */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 04:23:38 by awu           #+#    #+#                 */
/*   Updated: 2021/12/07 17:16:00 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	tmp;
	int	res;

	res = 0;
	tmp = 0;
	if (nb <= 0)
		return (0);
	while (res < nb)
	{
		tmp++;
		res = tmp * tmp;
	}
	tmp--;
	return (tmp);
}
/*int main (void){
    int a;
    int ret;

    a = 5;
    ret = ft_sqrt(a);
    printf("%d", ret);
}*/
