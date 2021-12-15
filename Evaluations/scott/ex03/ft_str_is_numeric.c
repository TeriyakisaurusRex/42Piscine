/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:10:51 by yzhang            #+#    #+#             */
/*   Updated: 2021/12/03 13:08:30 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			result = 0;
			i++;
		}
		else
		{
			result = 1;
			break ;
		}
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_numeric("F2K021"));
	printf("%d\n", ft_str_is_numeric("3252350"));
	printf("%d\n", ft_str_is_numeric("00%326"));
	printf("%d\n", ft_str_is_numeric("5325 325 236"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}													*/
