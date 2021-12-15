/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:52:20 by yzhang            #+#    #+#             */
/*   Updated: 2021/12/03 10:27:27 by yzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char d[3] = "DDD";
	int i = 0;
	while (i < 3)
	{
		printf("%c",d[i]);
		i++;
	}
	ft_strcpy(d,"ssss");
	i = 0;
	while (i < 3)
	{
		printf("%c",d[i]);
		i++;
	}
	return 0;
}						*/
