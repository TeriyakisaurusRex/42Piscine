/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okafley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:09:28 by okafley           #+#    #+#             */
/*   Updated: 2021/12/13 17:34:29 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*	
int	main(void)

{
	char	string[] = "abcdedfhABC";
	printf("%s\n", ft_strupcase(string));
}*/
