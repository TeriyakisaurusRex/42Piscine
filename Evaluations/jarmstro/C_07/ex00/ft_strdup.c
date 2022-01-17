/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:43:14 by jarmstro          #+#    #+#             */
/*   Updated: 2021/12/16 12:37:29 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*retstr;
	char	*head;
	int		len;

	len = 0;
	head = src;
	while (*src)
	{
		len++;
		src++;
	}
	src = head;
	retstr = malloc (sizeof (*retstr) * (len + 1));
	if (!retstr)
		return (0);
	head = retstr;
	while (*src)
	{
		*retstr = *src;
		retstr++;
		src++;
	}
	*retstr = 0;
	return (head);
}
