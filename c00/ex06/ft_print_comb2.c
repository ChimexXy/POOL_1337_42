/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:47:25 by mozahnou          #+#    #+#             */
/*   Updated: 2024/08/31 13:49:31 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	u;
	int	v;

	u = 0;
	while (u <= 98)
	{
		v = u + 1;
		while (v <= 99)
		{
			ft_putchar((u / 10) + '0');
			ft_putchar((u % 10) + '0');
			ft_putchar(' ');
			ft_putchar((v / 10) + '0');
			ft_putchar((v % 10) + '0');
			if (u < 98)
				write(1, ", ", 2);
			v++;
		}
		u++;
	}
}
