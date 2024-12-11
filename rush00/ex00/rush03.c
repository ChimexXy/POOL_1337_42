/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:06:27 by mbarhoun          #+#    #+#             */
/*   Updated: 2024/09/01 17:41:24 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_condition(int line, int x, int colone, int y)
{
	if ((line == 1 || line == x) && (colone == 1))
		ft_putchar('A');
	else if ((line == 1 || line == x) 
		&& (colone == y))
		ft_putchar('C');
	else if ((line == 1 || line == x) 
		&& (colone > 1 && colone < y))
		ft_putchar('B');
	else if ((line > 1 && line < x) 
		&& (colone == 1 || colone == y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int y, int x)
{
	int	line;
	int	colone;

	if (y > 0 && x > 0)
	{
		line = 1;
		while (line <= x)
		{
			colone = 1;
			while (colone <= y)
			{
				ft_condition(line, x, colone, y);
				colone++;
			}
			ft_putchar('\n');
			line++;
		}
	}
	else
		write(1, "Error\n", 6);
}
