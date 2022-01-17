/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:21:58 by jarmstro          #+#    #+#             */
/*   Updated: 2021/12/16 11:54:38 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	join_str_len(int size, char **strs, char *sep)
{
	int		len;
	int		sep_len;
	int		i;
	int		word_len;
	char	*word;

	i = 0;
	word_len = 0;
	sep_len = str_len(sep);
	sep_len *= (size - 1);
	while (i < size)
	{
		word = *strs;
		word_len += str_len(word);
		strs++;
		i++;
	}
	len = word_len + sep_len + 1;
	return (len);
}

char	*allocate_mem(int size, char **strs, char *sep)
{
	char	*str;
	int		len;

	if (size == 0)
	{
		str = malloc(sizeof (*str));
		if (!(str))
			return (0);
		*str = 0;
		return (str);
	}
	len = join_str_len(size, strs, sep);
	str = malloc (len * sizeof (*str));
	*str = 0;
	return (str);
}

void	ft_cat(char *retstr, char *word)
{
	while (*retstr)
	{
		retstr++;
	}
	while (*word)
	{
		*retstr = *word;
		retstr++;
		word++;
	}
	*retstr = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*retstr;
	char	*retstrhead;
	char	*word;

	retstr = allocate_mem(size, strs, sep);
	retstrhead = retstr;
	i = 0;
	while (i < size)
	{
		word = *strs;
		ft_cat(retstr, word);
		if (i < size -1)
			ft_cat(retstr, sep);
		strs++;
		i++;
	}
	return (retstrhead);
}
