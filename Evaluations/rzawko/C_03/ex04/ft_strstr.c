/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzawko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 08:11:05 by rzawko            #+#    #+#             */
/*   Updated: 2021/12/11 08:14:51 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*needle;

	if (*to_find == '\0')
		return (str);
	haystack = str;
	needle = to_find;
	while (1)
	{
		if (*needle == '\0')
			return ((char *)(haystack - (needle - to_find)));
		if (*haystack == *needle)
			needle++;
		else
			needle = to_find;
		if (*haystack == '\0')
			break ;
		haystack++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	char *hay = "needhaystneedlacklesssneedlesss";
	char *needle = "needle";

	printf("%s", ft_strstr(hay, needle));
}
