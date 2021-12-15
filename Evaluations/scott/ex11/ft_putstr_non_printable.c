/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:24:36 by yzhang            #+#    #+#             */
/*   Updated: 2021/12/03 13:17:33 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_unprintable(char *str)
{
	if (*str > 126 || *str < 32)
		return (1);
	return (0);
}

char	*print_hex(char *str)
{
	char	*hexindex;
	char	slash;

	slash = 92;
	hexindex = "0123456789abcdef";
	write(1, &slash, 1);
	write(1, &hexindex[*str / 16], 1);
	write(1, &hexindex[*str % 16], 1);
	return (str);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	slash;

	i = 0;
	while (str[i] != '\0' || str[i + 1] != '\0')
	{
		if (is_unprintable(&str[i]))
			print_hex(&str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
*int	main(void)
	
	char	*a;

	a = "gsdgsDD\nDDeetwet\0FWERWETWET";
	ft_putstr_non_printable(a);
	return (0);
}
