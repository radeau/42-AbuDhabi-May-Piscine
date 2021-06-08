/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 03:59:15 by kpoquita          #+#    #+#             */
/*   Updated: 2021/06/08 19:17:45 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if ((*range = (int *)malloc(sizeof(int) * (max - min))) == NULL)
		return (-1);
	while (min < max)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (i);
}
