/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:00:22 by yzhang            #+#    #+#             */
/*   Updated: 2021/11/28 17:58:34 by yzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_char(char c);

void	draw_width(int width)
{
	int	count_column;

	count_column = 1;
	while (count_column <= width)
	{
		if (count_column == 1 || count_column == width)
			put_char('o');
		else
			put_char('-');
		count_column++;
	}
	put_char('\n');
}

void	draw_length(int width)
{
	int	count_column;

	count_column = 1;
	while (count_column <= width)
	{
		if (count_column == 1 || count_column == width)
			put_char('|');
		else
			put_char(' ');
		count_column++;
	}
	put_char('\n');
}

void	rush(int width, int length)
{
	int	count_line;

	count_line = 1;
	while (count_line <= length)
	{
		if (count_line == 1 || count_line == length)
			draw_width(width);
		else
			draw_length(width);
		count_line++;
	}
}
