/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:53:34 by yzhang            #+#    #+#             */
/*   Updated: 2021/12/03 13:08:52 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
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
	printf("%d\n", ft_str_is_uppercase("ASH HBFD	352"));
	printf("%d\n", ft_str_is_uppercase("ADSGDG"));
	printf("%d\n", ft_str_is_uppercase("ggsdsa"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);
}			*/
