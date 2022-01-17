/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzawko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:31:22 by tzawko            #+#    #+#             */
/*   Updated: 2021/12/18 14:41:23 by jthiele          ###   ########.fr       */
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
			++needle;
		else
			needle = to_find;
		if (*haystack == '\0')
			return (0);
		++haystack;
	}
}

#include <stdio.h>

int	main()
{
	char string[] = "haystahakck";
	char string2[] = "hak";

	printf("%s", ft_strstr(string, string2));
}
