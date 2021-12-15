/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:50:52 by yzhang            #+#    #+#             */
/*   Updated: 2021/12/03 10:28:23 by yzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
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
	ft_strncpy(d, "ssss", 3);
	i = 0;
	while (i < 3)
	{
		printf("%c",d[i]);
		i++;
	}
	return 0;
}							*/
