/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:41:49 by kpoquita          #+#    #+#             */
/*   Updated: 2021/06/08 20:50:49 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *range;

	i = 0;
	if (max < min || !(range = (int *)malloc(sizeof(int) * (max - min) + 1)))
		return (0);
	while (min <= max)
		range[i++] = min++;
	return (range);
}
