/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozahnou <mozahnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:47:21 by mozahnou          #+#    #+#             */
/*   Updated: 2024/09/07 20:09:06 by mozahnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	u;
	unsigned int	v;

	u = 0;
	v = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	while (src[v] != '\0' && v < nb)
	{
		dest[u] = src[v];
		u++;
		v++;
	}
	dest[u] = '\0';
	return (dest);
}
