/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:16:10 by kpoquita          #+#    #+#             */
/*   Updated: 2021/06/02 18:47:03 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					i;
	unsigned int		s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
		i++;
	while (src[s] != '\0' && s < nb)
	{
		dest[i + s] = src[s];
		s++;
	}
	dest[i + s] = '\0';
	return (dest);
}
