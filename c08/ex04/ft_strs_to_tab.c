/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:55:21 by mozahnou          #+#    #+#             */
/*   Updated: 2024/09/19 22:24:42 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;

	i = 0;
	while (src[i])
		i++;
	c = malloc((sizeof(char) * i) + 1);
	if (!c)
		return (NULL);
	i = 0;
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*out;
	int			i;

	i = 0;
	out = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!out)
		return (NULL);
	while (i < ac)
	{
		out[i].size = ft_strlen(av[i]);
		out[i].str = av[i];
		out[i].copy = ft_strdup(av[i]);
		i++;
	}
	out[i].str = 0;
	return (out);
}
