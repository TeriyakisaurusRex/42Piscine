/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:59:24 by yzhang            #+#    #+#             */
/*   Updated: 2021/12/03 10:45:07 by yzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if ((str[i] <= 90 && str[i] >= 65) || (str[i] <= 122 && str[i] >= 97))
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
	printf("%d\n", ft_str_is_alpha("F2K021"));
	printf("%d\n", ft_str_is_alpha("DoNotUse"));
	printf("%d\n", ft_str_is_alpha("DELL"));
	printf("%d\n", ft_str_is_alpha("terminal"));
	printf("%d\n", ft_str_is_alpha("Do Not Use"));
	printf("%d\n", ft_str_is_alpha(""));
	return (0);
}												*/
