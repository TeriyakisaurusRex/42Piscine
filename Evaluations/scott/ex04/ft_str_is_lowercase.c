/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:47:30 by yzhang            #+#    #+#             */
/*   Updated: 2021/12/03 13:08:42 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
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
	printf("%d\n", ft_str_is_lowercase("fsaf fgge	fsf"));
	printf("%d\n", ft_str_is_lowercase("ADSGDG"));
	printf("%d\n", ft_str_is_lowercase("ggsdsa"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}				*/
