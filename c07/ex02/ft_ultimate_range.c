/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:10:19 by mozahnou          #+#    #+#             */
/*   Updated: 2024/09/17 21:58:02 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	*range = 0;
	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	tab = malloc(4 * size);
	if (!tab)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (size);
}
/*#include <stdio.h>
int main()
{
	int i = 0;
	int *tab;
	int size = ft_ultimate_range(&tab, 5, 14);
	printf("%d\n", size);
	while(i < size)
	{
		printf("%d,", tab[i]);
		i++;
	}
}*/