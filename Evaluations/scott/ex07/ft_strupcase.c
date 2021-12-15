/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:02:41 by yzhang            #+#    #+#             */
/*   Updated: 2021/12/03 13:09:47 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] =- 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char a[5] = "2dFdd";
	char *d;
	d = ft_strupcase(a);
	int i = 0;
	while (i < 5)
	{
		printf("%c", d[i]);
		i++;
	}
	return (0);
}			*/
