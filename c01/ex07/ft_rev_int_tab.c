/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 22:19:19 by mozahnou          #+#    #+#             */
/*   Updated: 2024/09/17 12:44:36 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		res = tab[i];
		tab[i] = tab[j - i];
		tab[j - i] = res;
		i++;
	}
}

#include <stdio.h>

int main()
{
    int *t = {1, 2, 3, 4, 5};
    int i = 0;
    int size = 5;
    
}