/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:14:33 by mozahnou          #+#    #+#             */
/*   Updated: 2024/09/10 17:50:13 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	u;
	int	v;

	u = 0;
	v = 0;
	while (dest[u] != '\0')
	{
		u++; 
	}
	while (src[v] != '\0')
	{
		dest[u] = src[v];
		u++;
		v++;
	}
	dest[u] = '\0';
	return (dest);
}