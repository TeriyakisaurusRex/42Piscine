/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:48:50 by aroberts          #+#    #+#             */
/*   Updated: 2021/12/14 13:17:21 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	printf("%s\n", dest);
	unsigned int	i;

	i = 0;
	while (src[i] && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	printf("%s\n", dest);
	return(dest);
}

int	main(void)
{
char destination[100] = "dlrowolleh";
char source[100] = "helloworld";
int n  = '5';
ft_strncpy(destination, source, n);
return(0);
}
