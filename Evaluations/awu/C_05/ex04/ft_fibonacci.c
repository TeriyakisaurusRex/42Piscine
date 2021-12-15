/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                       :      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awu <awu@student.42adel.org.au>     +#+  +:+       +#+               */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 04:23:38 by awu           #+#    #+#                 */
/*   Updated: 2021/12/07 17:14:22 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (0);
}
