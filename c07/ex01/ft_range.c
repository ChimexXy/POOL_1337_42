/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:48:04 by mozahnou          #+#    #+#             */
/*   Updated: 2024/09/16 19:40:59 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = max - min;
	tab = malloc(4 * size);
	if (min >= max)
	{
		return (0);
	}
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>
int main()
{
    int i = 0;
    int *tab = ft_range(5, 10);
    int size = 5;
    while(i < size)
    {
        printf("%d,", tab[i]);
        i++;
    }
}*/