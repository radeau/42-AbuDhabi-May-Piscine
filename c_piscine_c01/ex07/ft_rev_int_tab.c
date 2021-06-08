/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:27:22 by kpoquita          #+#    #+#             */
/*   Updated: 2021/05/26 17:08:05 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int y;
	int swap;

	x = 0;
	y = size - 1;
	while (x < (size / 2))
	{
		swap = tab[x];
		tab[x] = tab[y];
		tab[y] = swap;
		x++;
		y--;
	}
}
