/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthiele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:19:19 by jthiele           #+#    #+#             */
/*   Updated: 2022/01/17 12:46:09 by jthiele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, char c)
{
	int		i;
	char	*ret;

	i = 0;
	ret = 0;
	while (s[i])
	{
		if (s[i] == c)
			ret = ((char *)s + i);
		i++;
	}
	return (ret);
}
