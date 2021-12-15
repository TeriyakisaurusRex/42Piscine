/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:27:43 by yzhang            #+#    #+#             */
/*   Updated: 2021/12/03 13:12:11 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	is_lowcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	return (0);
}

int	is_upcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		return (1);
	return (0);
}

int	is_nonletternum(char *str)
{
	if (is_lowcase(str) || is_upcase(str) || (*str <= '9' && *str >= '0'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	first;
	int	i;

	first = 1;
	i = 0;
	while (str[i] != '\0')
	{	
		if (first == 0 && is_upcase(&str[i]))
		{
			str[i] = str[i] + 32;
		}
		if (first == 1 && is_lowcase(&str[i]))
		{
			str[i] = str[i] - 32;
			first = 0;
		}
		if (is_nonletternum(&str[i]))
		{
			first = 1;
		}
		else
			first = 0;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char a[17] = "2F rerFSA-eFe+ YD";
	char *d;
	d = ft_strcapitalize(a);
	int i = 0;
	while (i < 17)
	{
		printf("%c", d[i]);
		i++;
	}
	return (0);
}				*/
