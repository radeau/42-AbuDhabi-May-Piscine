/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:28:29 by kpoquita          #+#    #+#             */
/*   Updated: 2021/06/08 20:02:38 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_total_strlen(char **string, int size, int sep_len)
{
	int	total_len;
	int i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(string[i]);
		total_len += sep_len;
		i++;
	}
	total_len -= sep_len;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	char	*read;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_len = ft_total_strlen(strs, size, ft_strlen(sep));
	if (!(string = (char *)malloc((full_len + 1) * sizeof(char))))
		return (0);
	read = string;
	i = 0;
	while (i < size)
	{
		ft_strcpy(read, strs[i]);
		read += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(read, sep);
			read += ft_strlen(sep);
		}
		i++;
	}
	*read = '\0';
	return (string);
}
