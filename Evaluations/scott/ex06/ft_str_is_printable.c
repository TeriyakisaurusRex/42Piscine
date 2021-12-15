/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:03:15 by yzhang            #+#    #+#             */
/*   Updated: 2021/12/03 13:09:17 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] <= 126 && str[i] >= 32)
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
	printf("%d\n", ft_str_is_printable("DGSEG"));
	printf("%d\n", ft_str_is_printable("\5"));
	printf("%d\n", ft_str_is_printable("\n"));
	printf("%d\n", ft_str_is_printable(""));
	return (0);
}		*/
