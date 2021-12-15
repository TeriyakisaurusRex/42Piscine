/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimcuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:34:23 by jlimcuan          #+#    #+#             */
/*   Updated: 2021/12/07 17:37:11 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*int main(void)
{
    char a[] = "good DAY! HAVE A NICE DAY 123";
    printf("Before:%s\n", a);
    printf("After:%s\n",ft_strlowcase(a));	
}*/
