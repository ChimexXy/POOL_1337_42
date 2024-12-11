/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:13:45 by mozahnou          #+#    #+#             */
/*   Updated: 2024/09/18 22:03:25 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	u;
	int	v;

	u = 0;
	v = 0;
	if (to_find[v] == '\0')
	{
		return (str);
	}
	while (str[u] != '\0')
	{
		while (str[u + v] == to_find[v] && str[u + v] != '\0')
		{
			v++;
		}
		if (to_find[v] == '\0')
		{
			return (str + u);
		}
		u++;
		v = 0;
	}
	return (0);
}
