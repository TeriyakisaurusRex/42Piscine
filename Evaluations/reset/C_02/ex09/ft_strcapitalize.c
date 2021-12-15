/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:08:55 by jthiele           #+#    #+#             */
/*   Updated: 2021/12/02 14:38:47 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_number(char c)
{
	if (c > 57 || c < 48)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	is_upper(char c)
{
	if (c > 90 || c < 65)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	is_lower(char c)
{
	if (c > 122 || c < 97)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	is_alphanum(char c)
{
	if (is_number(c) == 1 || is_upper(c) == 1 || is_lower(c) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || is_alphanum(str[i - 1]) == 0)
		{
			if (is_lower(str[i]) == 1)
			{
				str[i] -= 32;
			}
		}
		else if (is_upper(str[i]) == 1)
		{
			str[i] += 32;
		}
	i++;
	}
	return (str);
}
