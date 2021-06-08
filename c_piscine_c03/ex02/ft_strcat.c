/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 08:17:54 by kpoquita          #+#    #+#             */
/*   Updated: 2021/06/01 11:10:32 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *dest, char *src)
{
	int i;
	int s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
		i++;
	while (src[s] != '\0')
	{
		dest[i + s] = src[s];
		s++;
	}
	dest[i + s] = src[s];
	return (dest);
}
