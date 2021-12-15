/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimcuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:07:54 by jlimcuan          #+#    #+#             */
/*   Updated: 2021/12/07 17:40:02 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	up;
	int	i;

	up = 1;
	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if (up && str[i] <= 'z' && str[i] >= 'a')
				str[i] -= 32;
			else if (!up && str[i] <= 'Z' && str[i] >= 'A')
				str[i] += 32;
				up = 0;
		}
		else
			up = 1;
		i++;
	}
	return (str);
}

int main(void)
{
	char a[] = "hello this is tHE sTRING, 42adelaide-piscine-pool";

	printf("Before:%s\n", a);
	printf("After:%s", ft_strcapitalize(a));
}
