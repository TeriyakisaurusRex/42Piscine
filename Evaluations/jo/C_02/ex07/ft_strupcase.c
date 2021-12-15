/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimcuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:50:41 by jlimcuan          #+#    #+#             */
/*   Updated: 2021/12/05 16:33:08 by jlimcuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}
	return (str);
}
/*int main(void)
{
	char a[] = "good DAY";
	printf("Before:%s\n", a);
	printf("After:%s",ft_strupcase(a));
}*/
