/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:11:05 by mozahnou          #+#    #+#             */
/*   Updated: 2024/09/17 21:54:50 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (&s1[i]);
}

int	ft_fin_len(int size, char **str, char *sep)
{
	int	i;
	int	len_fin;

	len_fin = 0;
	i = 0;
	while (i < size)
	{
		len_fin = ft_strlen(str[i]);
		len_fin += *sep;
		i++;
	}
	return (len_fin);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		r_size;
	char	*res;

	if (size == 0)
	{
		return (malloc(1));
	}
	i = 0;
	r_size = ft_fin_len(size, strs, sep);
	res = malloc(r_size);
	if (!res)
		return (0);
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(res, sep);
		}
		i++;
	}
	return (res);
}

/*#include <stdio.h>

int main()
{
	int size = 3;
	char **str;
	str[0] = "hello";
	str[1] = "world";
	str[2] = "welcome";
	char *sep = "/";
	printf("%s", ft_strjoin(size, str, sep));
	printf("\n");
}
*/